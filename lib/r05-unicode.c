#include "r05-unicode.h"
#include <unicode/ubrk.h>
#include <unicode/uscript.h>
#include <unicode/ubidi.h>
#include <string.h>
#include <stdlib.h>

/* Global Unicode converters and normalizers */
static UConverter *g_utf8_converter = NULL;
static const UNormalizer2 *g_nfc_normalizer = NULL;
static const UNormalizer2 *g_nfd_normalizer = NULL;
static const UNormalizer2 *g_nfkc_normalizer = NULL;
static const UNormalizer2 *g_nfkd_normalizer = NULL;

/* Initialize Unicode subsystem */
int r05_unicode_init(void) {
    UErrorCode status = U_ZERO_ERROR;
    
    /* Create UTF-8 converter */
    g_utf8_converter = ucnv_open("UTF-8", &status);
    if (U_FAILURE(status)) {
        return 0;
    }
    
    /* Get normalizers */
    g_nfc_normalizer = unorm2_getNFCInstance(&status);
    if (U_FAILURE(status)) {
        ucnv_close(g_utf8_converter);
        g_utf8_converter = NULL;
        return 0;
    }
    
    g_nfd_normalizer = unorm2_getNFDInstance(&status);
    g_nfkc_normalizer = unorm2_getNFKCInstance(&status);
    g_nfkd_normalizer = unorm2_getNFKDInstance(&status);
    
    return 1;
}

/* Cleanup Unicode subsystem */
void r05_unicode_cleanup(void) {
    if (g_utf8_converter) {
        ucnv_close(g_utf8_converter);
        g_utf8_converter = NULL;
    }
    /* Normalizers are singletons, no need to close */
}

/* Helper function to convert UTF-32 to UTF-16 */
static int32_t utf32_to_utf16(const r05_unicode_char *utf32, int32_t utf32_len,
                              UChar *utf16, int32_t utf16_capacity) {
    int32_t i, j = 0;
    for (i = 0; i < utf32_len && j < utf16_capacity; i++) {
        UChar32 ch = utf32[i];
        if (ch <= 0xFFFF) {
            /* BMP character */
            if (j < utf16_capacity) {
                utf16[j++] = (UChar)ch;
            }
        } else if (ch <= 0x10FFFF) {
            /* Supplementary character - encode as surrogate pair */
            if (j + 1 < utf16_capacity) {
                ch -= 0x10000;
                utf16[j++] = (UChar)((ch >> 10) + 0xD800);
                utf16[j++] = (UChar)((ch & 0x3FF) + 0xDC00);
            } else {
                break;
            }
        }
    }
    return j;
}

/* Helper function to convert UTF-16 to UTF-32 */
static int32_t utf16_to_utf32(const UChar *utf16, int32_t utf16_len,
                              r05_unicode_char *utf32, int32_t utf32_capacity) {
    int32_t i = 0, j = 0;
    while (i < utf16_len && j < utf32_capacity) {
        UChar ch = utf16[i++];
        if ((ch & 0xFC00) == 0xD800 && i < utf16_len) {
            /* High surrogate */
            UChar ch2 = utf16[i];
            if ((ch2 & 0xFC00) == 0xDC00) {
                /* Low surrogate */
                utf32[j++] = ((ch & 0x3FF) << 10) + (ch2 & 0x3FF) + 0x10000;
                i++;
            } else {
                /* Invalid surrogate */
                utf32[j++] = ch;
            }
        } else {
            utf32[j++] = ch;
        }
    }
    return j;
}

/* UTF-8 to UTF-32 conversion using ICU */
int32_t r05_utf8_to_utf32(
    const char *utf8, int32_t utf8_len,
    r05_unicode_char *utf32, int32_t utf32_capacity
) {
    UErrorCode status = U_ZERO_ERROR;
    UChar *utf16_buffer = NULL;
    int32_t utf16_len, utf32_len;
    
    if (!utf8 || !utf32 || utf32_capacity <= 0) {
        return -1;
    }
    
    /* If utf8_len is -1, calculate length */
    if (utf8_len < 0) {
        utf8_len = (int32_t)strlen(utf8);
    }
    
    /* Allocate UTF-16 buffer (worst case: each byte becomes one UChar) */
    utf16_buffer = (UChar*)malloc((utf8_len + 1) * sizeof(UChar));
    if (!utf16_buffer) {
        return -1;
    }
    
    /* Convert UTF-8 to UTF-16 */
    u_strFromUTF8(utf16_buffer, utf8_len + 1, &utf16_len, 
                  utf8, utf8_len, &status);
    
    if (U_FAILURE(status) && status != U_BUFFER_OVERFLOW_ERROR) {
        free(utf16_buffer);
        return -1;
    }
    
    /* Convert UTF-16 to UTF-32 */
    utf32_len = utf16_to_utf32(utf16_buffer, utf16_len, utf32, utf32_capacity);
    
    free(utf16_buffer);
    return utf32_len;
}

/* UTF-32 to UTF-8 conversion using ICU */
int32_t r05_utf32_to_utf8(
    const r05_unicode_char *utf32, int32_t utf32_len,
    char *utf8, int32_t utf8_capacity
) {
    UErrorCode status = U_ZERO_ERROR;
    UChar *utf16_buffer = NULL;
    int32_t utf16_len, utf8_len;
    
    if (!utf32 || !utf8 || utf8_capacity <= 0) {
        return -1;
    }
    
    /* Allocate UTF-16 buffer (worst case: 2 UChars per UTF-32 char) */
    utf16_buffer = (UChar*)malloc(utf32_len * 2 * sizeof(UChar));
    if (!utf16_buffer) {
        return -1;
    }
    
    /* Convert UTF-32 to UTF-16 */
    utf16_len = utf32_to_utf16(utf32, utf32_len, utf16_buffer, utf32_len * 2);
    
    /* Convert UTF-16 to UTF-8 */
    u_strToUTF8(utf8, utf8_capacity, &utf8_len,
                utf16_buffer, utf16_len, &status);
    
    free(utf16_buffer);
    
    if (U_FAILURE(status) && status != U_BUFFER_OVERFLOW_ERROR) {
        return -1;
    }
    
    return utf8_len;
}

/* Decode single UTF-8 character */
r05_unicode_char r05_utf8_decode_char(const char **utf8_ptr) {
    const char *ptr = *utf8_ptr;
    r05_unicode_char ch;
    int32_t offset = 0;
    
    if (!ptr || !*ptr) {
        return R05_INVALID_UNICODE;
    }
    
    /* For ASCII optimization - check if it's a single-byte character */
    if ((unsigned char)*ptr < 128) {
        ch = (unsigned char)*ptr;
        *utf8_ptr = ptr + 1;
        return ch;
    }
    
    /* Use ICU to get next character */
    U8_NEXT(ptr, offset, -1, ch);
    
    if (ch < 0 || ch > R05_MAX_UNICODE) {
        ch = R05_REPLACEMENT_CHAR;
    }
    
    *utf8_ptr = ptr + offset;
    return ch;
}

/* Encode single UTF-32 character to UTF-8 */
int r05_utf32_char_to_utf8(r05_unicode_char ch, char *utf8) {
    int32_t len = 0;
    
    if (!utf8 || ch < 0 || ch > R05_MAX_UNICODE) {
        return 0;
    }
    
    /* Use ICU to append character */
    U8_APPEND_UNSAFE(utf8, len, ch);
    
    return len;
}

/* String length calculations */
int32_t r05_utf8_strlen(const char *utf8) {
    int32_t len = 0;
    int32_t offset = 0;
    r05_unicode_char ch;
    
    if (!utf8) {
        return 0;
    }
    
    /* Count UTF-32 characters */
    while (utf8[offset]) {
        U8_NEXT(utf8, offset, -1, ch);
        if (ch >= 0) {
            len++;
        }
    }
    
    return len;
}

/* Calculate UTF-8 length for UTF-32 string */
int32_t r05_utf32_to_utf8_length(const r05_unicode_char *utf32, int32_t utf32_len) {
    int32_t utf8_len = 0;
    int32_t i;
    
    if (!utf32 || utf32_len <= 0) {
        return 0;
    }
    
    for (i = 0; i < utf32_len; i++) {
        if (utf32[i] >= 0 && utf32[i] <= R05_MAX_UNICODE) {
            utf8_len += U8_LENGTH(utf32[i]);
        }
    }
    
    return utf8_len;
}

/* Character property queries using ICU */
int r05_is_valid_unicode(r05_unicode_char ch) {
    return ch >= 0 && ch <= R05_MAX_UNICODE && U_IS_UNICODE_CHAR(ch);
}

int r05_is_alphabetic(r05_unicode_char ch) {
    return u_isalpha(ch);
}

int r05_is_digit(r05_unicode_char ch) {
    return u_isdigit(ch);
}

int r05_is_upper(r05_unicode_char ch) {
    return u_isupper(ch);
}

int r05_is_lower(r05_unicode_char ch) {
    return u_islower(ch);
}

int r05_is_whitespace(r05_unicode_char ch) {
    return u_isWhitespace(ch);
}

int r05_is_printable(r05_unicode_char ch) {
    return u_isprint(ch);
}

/* Character category */
UCharCategory r05_unicode_category(r05_unicode_char ch) {
    return u_charType(ch);
}

/* Simple case conversion */
r05_unicode_char r05_to_upper(r05_unicode_char ch) {
    return u_toupper(ch);
}

r05_unicode_char r05_to_lower(r05_unicode_char ch) {
    return u_tolower(ch);
}

r05_unicode_char r05_to_title(r05_unicode_char ch) {
    return u_totitle(ch);
}

/* Full string case conversion */
int32_t r05_string_to_upper(
    const r05_unicode_char *src, int32_t src_len,
    r05_unicode_char *dest, int32_t dest_capacity,
    const char *locale
) {
    UErrorCode status = U_ZERO_ERROR;
    UCaseMap *csm;
    int32_t result_len;
    
    /* Create case map */
    csm = ucasemap_open(locale, 0, &status);
    if (U_FAILURE(status)) {
        return -1;
    }
    
    /* Convert to upper case */
    result_len = ucasemap_utf8ToUpper(csm, (char*)dest, dest_capacity * sizeof(r05_unicode_char),
                                      (const char*)src, src_len * sizeof(r05_unicode_char), &status);
    
    ucasemap_close(csm);
    
    if (U_FAILURE(status) && status != U_BUFFER_OVERFLOW_ERROR) {
        return -1;
    }
    
    /* Return character count, not byte count */
    return result_len / sizeof(r05_unicode_char);
}

int32_t r05_string_to_lower(
    const r05_unicode_char *src, int32_t src_len,
    r05_unicode_char *dest, int32_t dest_capacity,
    const char *locale
) {
    UErrorCode status = U_ZERO_ERROR;
    UCaseMap *csm;
    int32_t result_len;
    
    /* Create case map */
    csm = ucasemap_open(locale, 0, &status);
    if (U_FAILURE(status)) {
        return -1;
    }
    
    /* Convert to lower case */
    result_len = ucasemap_utf8ToLower(csm, (char*)dest, dest_capacity * sizeof(r05_unicode_char),
                                      (const char*)src, src_len * sizeof(r05_unicode_char), &status);
    
    ucasemap_close(csm);
    
    if (U_FAILURE(status) && status != U_BUFFER_OVERFLOW_ERROR) {
        return -1;
    }
    
    /* Return character count, not byte count */
    return result_len / sizeof(r05_unicode_char);
}

/* Unicode normalization */
int32_t r05_normalize_nfc(
    const r05_unicode_char *src, int32_t src_len,
    r05_unicode_char *dest, int32_t dest_capacity
) {
    UErrorCode status = U_ZERO_ERROR;
    UChar *utf16_src = NULL, *utf16_dest = NULL;
    int32_t utf16_src_len, utf16_dest_len, utf32_dest_len;
    
    /* Allocate UTF-16 buffers */
    utf16_src = (UChar*)malloc(src_len * 2 * sizeof(UChar));
    utf16_dest = (UChar*)malloc(dest_capacity * 2 * sizeof(UChar));
    if (!utf16_src || !utf16_dest) {
        free(utf16_src);
        free(utf16_dest);
        return -1;
    }
    
    /* Convert source UTF-32 to UTF-16 */
    utf16_src_len = utf32_to_utf16(src, src_len, utf16_src, src_len * 2);
    
    /* Normalize */
    utf16_dest_len = unorm2_normalize(g_nfc_normalizer, utf16_src, utf16_src_len,
                                      utf16_dest, dest_capacity * 2, &status);
    
    if (U_SUCCESS(status) || status == U_BUFFER_OVERFLOW_ERROR) {
        /* Convert result back to UTF-32 */
        utf32_dest_len = utf16_to_utf32(utf16_dest, utf16_dest_len, dest, dest_capacity);
    } else {
        utf32_dest_len = -1;
    }
    
    free(utf16_src);
    free(utf16_dest);
    
    return utf32_dest_len;
}

int32_t r05_normalize_nfd(
    const r05_unicode_char *src, int32_t src_len,
    r05_unicode_char *dest, int32_t dest_capacity
) {
    UErrorCode status = U_ZERO_ERROR;
    UChar *utf16_src = NULL, *utf16_dest = NULL;
    int32_t utf16_src_len, utf16_dest_len, utf32_dest_len;
    
    /* Allocate UTF-16 buffers */
    utf16_src = (UChar*)malloc(src_len * 2 * sizeof(UChar));
    utf16_dest = (UChar*)malloc(dest_capacity * 2 * sizeof(UChar));
    if (!utf16_src || !utf16_dest) {
        free(utf16_src);
        free(utf16_dest);
        return -1;
    }
    
    /* Convert source UTF-32 to UTF-16 */
    utf16_src_len = utf32_to_utf16(src, src_len, utf16_src, src_len * 2);
    
    /* Normalize */
    utf16_dest_len = unorm2_normalize(g_nfd_normalizer, utf16_src, utf16_src_len,
                                      utf16_dest, dest_capacity * 2, &status);
    
    if (U_SUCCESS(status) || status == U_BUFFER_OVERFLOW_ERROR) {
        /* Convert result back to UTF-32 */
        utf32_dest_len = utf16_to_utf32(utf16_dest, utf16_dest_len, dest, dest_capacity);
    } else {
        utf32_dest_len = -1;
    }
    
    free(utf16_src);
    free(utf16_dest);
    
    return utf32_dest_len;
}

int32_t r05_normalize_nfkc(
    const r05_unicode_char *src, int32_t src_len,
    r05_unicode_char *dest, int32_t dest_capacity
) {
    UErrorCode status = U_ZERO_ERROR;
    UChar *utf16_src = NULL, *utf16_dest = NULL;
    int32_t utf16_src_len, utf16_dest_len, utf32_dest_len;
    
    /* Allocate UTF-16 buffers */
    utf16_src = (UChar*)malloc(src_len * 2 * sizeof(UChar));
    utf16_dest = (UChar*)malloc(dest_capacity * 2 * sizeof(UChar));
    if (!utf16_src || !utf16_dest) {
        free(utf16_src);
        free(utf16_dest);
        return -1;
    }
    
    /* Convert source UTF-32 to UTF-16 */
    utf16_src_len = utf32_to_utf16(src, src_len, utf16_src, src_len * 2);
    
    /* Normalize */
    utf16_dest_len = unorm2_normalize(g_nfkc_normalizer, utf16_src, utf16_src_len,
                                      utf16_dest, dest_capacity * 2, &status);
    
    if (U_SUCCESS(status) || status == U_BUFFER_OVERFLOW_ERROR) {
        /* Convert result back to UTF-32 */
        utf32_dest_len = utf16_to_utf32(utf16_dest, utf16_dest_len, dest, dest_capacity);
    } else {
        utf32_dest_len = -1;
    }
    
    free(utf16_src);
    free(utf16_dest);
    
    return utf32_dest_len;
}

int32_t r05_normalize_nfkd(
    const r05_unicode_char *src, int32_t src_len,
    r05_unicode_char *dest, int32_t dest_capacity
) {
    UErrorCode status = U_ZERO_ERROR;
    UChar *utf16_src = NULL, *utf16_dest = NULL;
    int32_t utf16_src_len, utf16_dest_len, utf32_dest_len;
    
    /* Allocate UTF-16 buffers */
    utf16_src = (UChar*)malloc(src_len * 2 * sizeof(UChar));
    utf16_dest = (UChar*)malloc(dest_capacity * 2 * sizeof(UChar));
    if (!utf16_src || !utf16_dest) {
        free(utf16_src);
        free(utf16_dest);
        return -1;
    }
    
    /* Convert source UTF-32 to UTF-16 */
    utf16_src_len = utf32_to_utf16(src, src_len, utf16_src, src_len * 2);
    
    /* Normalize */
    utf16_dest_len = unorm2_normalize(g_nfkd_normalizer, utf16_src, utf16_src_len,
                                      utf16_dest, dest_capacity * 2, &status);
    
    if (U_SUCCESS(status) || status == U_BUFFER_OVERFLOW_ERROR) {
        /* Convert result back to UTF-32 */
        utf32_dest_len = utf16_to_utf32(utf16_dest, utf16_dest_len, dest, dest_capacity);
    } else {
        utf32_dest_len = -1;
    }
    
    free(utf16_src);
    free(utf16_dest);
    
    return utf32_dest_len;
}

/* Check if string is normalized */
int r05_is_normalized_nfc(const r05_unicode_char *str, int32_t len) {
    UErrorCode status = U_ZERO_ERROR;
    UChar *utf16_str = NULL;
    int32_t utf16_len;
    UBool result;
    
    /* Allocate UTF-16 buffer */
    utf16_str = (UChar*)malloc(len * 2 * sizeof(UChar));
    if (!utf16_str) {
        return 0;
    }
    
    /* Convert UTF-32 to UTF-16 */
    utf16_len = utf32_to_utf16(str, len, utf16_str, len * 2);
    
    /* Check normalization */
    result = unorm2_isNormalized(g_nfc_normalizer, utf16_str, utf16_len, &status);
    
    free(utf16_str);
    
    return U_SUCCESS(status) && result;
}

int r05_is_normalized_nfd(const r05_unicode_char *str, int32_t len) {
    UErrorCode status = U_ZERO_ERROR;
    UChar *utf16_str = NULL;
    int32_t utf16_len;
    UBool result;
    
    /* Allocate UTF-16 buffer */
    utf16_str = (UChar*)malloc(len * 2 * sizeof(UChar));
    if (!utf16_str) {
        return 0;
    }
    
    /* Convert UTF-32 to UTF-16 */
    utf16_len = utf32_to_utf16(str, len, utf16_str, len * 2);
    
    /* Check normalization */
    result = unorm2_isNormalized(g_nfd_normalizer, utf16_str, utf16_len, &status);
    
    free(utf16_str);
    
    return U_SUCCESS(status) && result;
}

/* Script detection */
UScriptCode r05_unicode_script(r05_unicode_char ch) {
    UErrorCode status = U_ZERO_ERROR;
    UScriptCode script = uscript_getScript(ch, &status);
    return U_SUCCESS(status) ? script : USCRIPT_INVALID_CODE;
}

/* Bidirectional properties */
UCharDirection r05_unicode_direction(r05_unicode_char ch) {
    return u_charDirection(ch);
}

/* Grapheme cluster boundaries */
int32_t r05_grapheme_length(const r05_unicode_char *str, int32_t len) {
    UErrorCode status = U_ZERO_ERROR;
    UBreakIterator *bi;
    UChar *utf16_str = NULL;
    int32_t utf16_len, pos, utf32_pos = 1;
    
    if (!str || len <= 0) {
        return 0;
    }
    
    /* Allocate UTF-16 buffer */
    utf16_str = (UChar*)malloc(len * 2 * sizeof(UChar));
    if (!utf16_str) {
        return 1;  /* Fallback to single character */
    }
    
    /* Convert UTF-32 to UTF-16 */
    utf16_len = utf32_to_utf16(str, len, utf16_str, len * 2);
    
    /* Create grapheme break iterator */
    bi = ubrk_open(UBRK_CHARACTER, NULL, utf16_str, utf16_len, &status);
    if (U_FAILURE(status)) {
        free(utf16_str);
        return 1;  /* Fallback to single character */
    }
    
    /* Get position after first grapheme */
    pos = ubrk_next(bi);
    if (pos != UBRK_DONE && pos > 0) {
        /* Convert UTF-16 position back to UTF-32 count */
        UChar temp_buffer[10];
        int i;
        for (i = 0; i < pos && i < 10; i++) {
            temp_buffer[i] = utf16_str[i];
        }
        utf32_pos = utf16_to_utf32(temp_buffer, pos, NULL, 0);
    }
    
    ubrk_close(bi);
    free(utf16_str);
    
    return (pos == UBRK_DONE) ? len : utf32_pos;
}

/* Count grapheme clusters */
int32_t r05_grapheme_count(const r05_unicode_char *str, int32_t len) {
    UErrorCode status = U_ZERO_ERROR;
    UBreakIterator *bi;
    UChar *utf16_str = NULL;
    int32_t utf16_len, count = 0;
    int32_t pos;
    
    if (!str || len <= 0) {
        return 0;
    }
    
    /* Allocate UTF-16 buffer */
    utf16_str = (UChar*)malloc(len * 2 * sizeof(UChar));
    if (!utf16_str) {
        return len;  /* Fallback to character count */
    }
    
    /* Convert UTF-32 to UTF-16 */
    utf16_len = utf32_to_utf16(str, len, utf16_str, len * 2);
    
    /* Create grapheme break iterator */
    bi = ubrk_open(UBRK_CHARACTER, NULL, utf16_str, utf16_len, &status);
    if (U_FAILURE(status)) {
        free(utf16_str);
        return len;  /* Fallback to character count */
    }
    
    /* Count grapheme clusters */
    while ((pos = ubrk_next(bi)) != UBRK_DONE) {
        count++;
    }
    
    ubrk_close(bi);
    free(utf16_str);
    return count;
}