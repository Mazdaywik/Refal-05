#ifndef R05_UNICODE_H_
#define R05_UNICODE_H_

#include <stdint.h>
#include <stddef.h>

/* ICU headers */
#include <unicode/uchar.h>
#include <unicode/ustring.h>
#include <unicode/ucnv.h>
#include <unicode/unorm2.h>
#include <unicode/ucasemap.h>
#include <unicode/uscript.h>

/* UTF-32 character type - using ICU's UChar32 */
typedef UChar32 r05_unicode_char;

/* Invalid character marker */
#define R05_INVALID_UNICODE ((r05_unicode_char)-1)

/* Maximum valid Unicode code point */
#define R05_MAX_UNICODE 0x10FFFF

/* Replacement character for invalid sequences */
#define R05_REPLACEMENT_CHAR 0xFFFD

/* Initialize Unicode subsystem (must be called before any Unicode operations) */
int r05_unicode_init(void);

/* Cleanup Unicode subsystem */
void r05_unicode_cleanup(void);

/* UTF-8 to UTF-32 conversion */
/* Returns number of UTF-32 characters produced, or -1 on error */
int32_t r05_utf8_to_utf32(
    const char *utf8, int32_t utf8_len,
    r05_unicode_char *utf32, int32_t utf32_capacity
);

/* UTF-32 to UTF-8 conversion */
/* Returns number of bytes written, or -1 on error */
int32_t r05_utf32_to_utf8(
    const r05_unicode_char *utf32, int32_t utf32_len,
    char *utf8, int32_t utf8_capacity
);

/* Decode single UTF-8 character */
/* Advances *utf8_ptr past the decoded character */
/* Returns R05_INVALID_UNICODE on error */
r05_unicode_char r05_utf8_decode_char(const char **utf8_ptr);

/* Encode single UTF-32 character to UTF-8 */
/* Returns number of bytes written (1-4), or 0 on error */
int r05_utf32_char_to_utf8(r05_unicode_char ch, char *utf8);

/* String length calculations */
/* Returns number of UTF-32 characters in UTF-8 string */
int32_t r05_utf8_strlen(const char *utf8);

/* Returns number of bytes needed to encode UTF-32 string as UTF-8 */
int32_t r05_utf32_to_utf8_length(const r05_unicode_char *utf32, int32_t utf32_len);

/* Character property queries using ICU */
int r05_is_valid_unicode(r05_unicode_char ch);
int r05_is_alphabetic(r05_unicode_char ch);
int r05_is_digit(r05_unicode_char ch);
int r05_is_upper(r05_unicode_char ch);
int r05_is_lower(r05_unicode_char ch);
int r05_is_whitespace(r05_unicode_char ch);
int r05_is_printable(r05_unicode_char ch);

/* Character category (returns ICU UCharCategory) */
UCharCategory r05_unicode_category(r05_unicode_char ch);

/* Case conversion */
r05_unicode_char r05_to_upper(r05_unicode_char ch);
r05_unicode_char r05_to_lower(r05_unicode_char ch);
r05_unicode_char r05_to_title(r05_unicode_char ch);

/* Full string case conversion (handles special cases like German ß) */
/* Returns number of characters written, or -1 on error */
int32_t r05_string_to_upper(
    const r05_unicode_char *src, int32_t src_len,
    r05_unicode_char *dest, int32_t dest_capacity,
    const char *locale  /* NULL for root locale */
);

int32_t r05_string_to_lower(
    const r05_unicode_char *src, int32_t src_len,
    r05_unicode_char *dest, int32_t dest_capacity,
    const char *locale  /* NULL for root locale */
);

/* Unicode normalization */
/* Returns number of characters written, or -1 on error */
int32_t r05_normalize_nfc(
    const r05_unicode_char *src, int32_t src_len,
    r05_unicode_char *dest, int32_t dest_capacity
);

int32_t r05_normalize_nfd(
    const r05_unicode_char *src, int32_t src_len,
    r05_unicode_char *dest, int32_t dest_capacity
);

int32_t r05_normalize_nfkc(
    const r05_unicode_char *src, int32_t src_len,
    r05_unicode_char *dest, int32_t dest_capacity
);

int32_t r05_normalize_nfkd(
    const r05_unicode_char *src, int32_t src_len,
    r05_unicode_char *dest, int32_t dest_capacity
);

/* Check if string is normalized */
int r05_is_normalized_nfc(const r05_unicode_char *str, int32_t len);
int r05_is_normalized_nfd(const r05_unicode_char *str, int32_t len);

/* Script detection */
UScriptCode r05_unicode_script(r05_unicode_char ch);

/* Bidirectional properties */
UCharDirection r05_unicode_direction(r05_unicode_char ch);

/* Grapheme cluster boundaries */
/* Returns length of first grapheme cluster in characters */
int32_t r05_grapheme_length(const r05_unicode_char *str, int32_t len);

/* Count number of grapheme clusters */
int32_t r05_grapheme_count(const r05_unicode_char *str, int32_t len);

#endif /* R05_UNICODE_H_ */