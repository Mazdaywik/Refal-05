#ifndef LAMESTD_H_
#define LAMESTD_H_

#include <stdarg.h>
#include <stdint.h>
#include <limits.h>
#include <stddef.h>

#include "stb_sprintf.h"

// assert.h
void assert(int expr);

// string.h
int strcmp(const char* s1, const char* s2);
char* strncpy(char *dest, const char *src, size_t n);
char* strchr(const char *str, int c);
int isalpha(int c);
int isdigit(int c);
int isprint(int c);
int isupper(int c);
int islower(int c);
int tolower(int c);
int toupper(int c);

// time.h
#define CLOCKS_PER_SEC 1000

typedef double clock_t;
clock_t clock(void);

typedef unsigned int time_t;
time_t time(time_t* t); // lamelib.js
char* ctime(time_t* t); // lamelib.js

// malloc.h
#define LAME_POOL_SIZE 1024 * 1024 * 64

void* malloc(size_t size);
void* calloc(size_t num, size_t size);
void free(void* ptr);
void lame_pool_free(void);

// stdio.h
typedef void FILE;

extern FILE* stdin;
extern FILE* stdout;
extern FILE* stderr;

#define EOF (-1)
#define FILENAME_MAX (256)

int write_impl(FILE* stream, const char* content); // lamelib.js
int putc_impl(FILE* stream, char chrCode); // lamelib.js

FILE* fopen(const char* filename, const char* mode); // lamelib.js
int fclose(FILE* stream); // lamelib.js
int remove(const char* filename); // lamelib.js
char fgetc(FILE* stream); // lamelib.js
void fflush(FILE* stream); // lamelib.js
int putc(const char chr, FILE* stream);
int print_int(int n); // lamelib.js
int fprintf(FILE* stream, const char* format, ...);
int sprintf(char *buffer, const char *format, ...);
#define sprintf(buffer, format, ...) stbsp_sprintf(buffer, format, __VA_ARGS__)
#define printf(...) fprintf (stdout, __VA_ARGS__)

// stdlib.h
void exit(int retcode); // lamelib.js
void atexit(void* handler); // lamelib.js
void abort(void); // lamelib.js
char* getenv(const char* envname); // lamelib.js
int system(const char* command); // lamelib.js

void* memset(void* ptr, int value, size_t num);

// errno.h
static int errno = 69;
char* strerror(int _errno);

#endif /* LAMESTD_H_ */

/*
**********************************************************************
**********************************************************************
**********************************************************************
**********************************************************************
**********************************************************************
**********************************************************************
**********************************************************************
**********************************************************************
**********************************************************************
**********************************************************************
**********************************************************************
**********************************************************************
**********************************************************************
**********************************************************************
**********************************************************************
**********************************************************************
*/

#ifdef LAMESTD_IMPLEMENTATION

#define STB_SPRINTF_IMPLEMENTATION
#include "stb_sprintf.h"
#undef STB_SPRINTF_IMPLEMENTATION

// assert.h
void assert(int expr) {
    if (!expr) exit(1);
}

// string.h
int strcmp(const char* s1, const char* s2) {
    while(*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(const unsigned char*)s1 - *(const unsigned char*)s2;
}

char* strncpy(char *dest, const char *src, size_t n) {
    size_t i;
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }

    for (; i < n; i++) {
        dest[i] = '\0';
    }
    return dest;
}

char* strchr(const char *str, int c) {
    while (*str != '\0') {
        if (*str == (char)c) {
            return (char *)str;
        }
        str++;
    }

    if (c == '\0') {
        return (char *)str;
    }
    return NULL;
}

int isalpha(int c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

int isdigit(int c) {
    return (c >= '0' && c <= '9');
}

int isprint(int c) {
    return (c >= 32 && c <= 126);
}

int isupper(int c) {
    return (c >= 'A' && c <= 'Z');
}

int islower(int c) {
    return (c >= 'a' && c <= 'z');
}

int tolower(int c) {
    if (isupper(c)) {
        return c + ('a' - 'A');
    }
    return c;
}

int toupper(int c) {
    if (islower(c)) {
        return c - ('a' - 'A');
    }
    return c;
}

// malloc.h
static uint8_t s_lame_pool[LAME_POOL_SIZE];
static size_t s_lame_memory_use = 0;

void* malloc(size_t size) {
    if (s_lame_memory_use + size > LAME_POOL_SIZE) {
        return (void*)0;
    }

    void* ptr = &s_lame_pool[s_lame_memory_use];
    s_lame_memory_use += size;
    return ptr;
}

void* calloc(size_t num, size_t size) {
    size_t total_size = num * size;
    void* ptr = malloc(total_size);

    if (ptr != (void*)0) {
        for (size_t i = 0; i < total_size; ++i) {
            ((uint8_t*)ptr)[i] = 0;
        }
    }

    return ptr;
}

void free(void* ptr) {}

void lame_pool_free(void) {
    s_lame_memory_use = 0;
}

// stdio.h

FILE* stdin;
FILE* stdout;
FILE* stderr;


int fprintf(FILE* stream, const char* format, ...) {
    va_list args;
    va_start(args, format);

    char buffer[1024];
    int written = stbsp_vsprintf(buffer, format, args);

    write_impl(stream, buffer);

    va_end(args);

    return written;
}

int putc(const char chr, FILE* stream) {
    return putc_impl(stream, chr);
}

// stdlib.h

void atexit(void* handler) { }

void* memset(void* ptr, int value, size_t num) {
    unsigned char* p = (unsigned char*)ptr;
    unsigned char byte_value = (unsigned char)value;

    while (num--) {
        *p++ = byte_value;
    }

    return ptr;
}

// errno.h

char* strerror(int _errno) {
    return "Error handling in 2024? kek";
}

#endif /* LAMESTD_IMPLEMENTATION */
