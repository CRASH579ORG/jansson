/*
 * Copyright (c) 2009-2016 Petri Lehtinen <petri@digip.org>
 *
 * Jansson is free software; you can redistribute it and/or modify
 * it under the terms of the MIT license. See LICENSE for details.
 */

#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif

#include "jansson_private.h"

#include <assert.h>
#include <errno.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifdef HAVE_UNISTD_H
#include <unistd.h>
#endif

#include "jansson.h"
#include "strbuffer.h"
#include "utf.h"
#include "../commit0_stub.h"

#define STREAM_STATE_OK    0
#define STREAM_STATE_EOF   -1
#define STREAM_STATE_ERROR -2

#define TOKEN_INVALID -1
#define TOKEN_EOF     0
#define TOKEN_STRING  256
#define TOKEN_INTEGER 257
#define TOKEN_REAL    258
#define TOKEN_TRUE    259
#define TOKEN_FALSE   260
#define TOKEN_NULL    261

/* Locale independent versions of isxxx() functions */
#define l_isupper(c) ('A' <= (c) && (c) <= 'Z')
#define l_islower(c) ('a' <= (c) && (c) <= 'z')
#define l_isalpha(c) (l_isupper(c) || l_islower(c))
#define l_isdigit(c) ('0' <= (c) && (c) <= '9')
#define l_isxdigit(c)                                                                    \
    (l_isdigit(c) || ('A' <= (c) && (c) <= 'F') || ('a' <= (c) && (c) <= 'f'))

/* Read one byte from stream, convert to unsigned char, then int, and
   return. return EOF on end of file. This corresponds to the
   behaviour of fgetc(). */
typedef int (*get_func)(void *data);

typedef struct {
    get_func get;
    void *data;
    char buffer[5];
    size_t buffer_pos;
    int state;
    int line;
    int column, last_column;
    size_t position;
} stream_t;

typedef struct {
    stream_t stream;
    strbuffer_t saved_text;
    size_t flags;
    size_t depth;
    int token;
    union {
        struct {
            char *val;
            size_t len;
        } string;
        json_int_t integer;
        double real;
    } value;
} lex_t;

#define stream_to_lex(stream) container_of(stream, lex_t, stream)

/*** error reporting ***/

static void error_set(json_error_t *error, const lex_t *lex, enum json_error_code code,
                      const char *msg, ...) { STUB_PANIC("error_set"); }

/*** lexical analyzer ***/

static void stream_init(stream_t *stream, get_func get, void *data) { STUB_PANIC("stream_init"); }

static int stream_get(stream_t *stream, json_error_t *error) { STUB_PANIC("stream_get"); }

static void stream_unget(stream_t *stream, int c) { STUB_PANIC("stream_unget"); }

static int lex_get(lex_t *lex, json_error_t *error) { STUB_PANIC("lex_get"); }

static void lex_save(lex_t *lex, int c) { STUB_PANIC("lex_save"); }

static int lex_get_save(lex_t *lex, json_error_t *error) { STUB_PANIC("lex_get_save"); }

static void lex_unget(lex_t *lex, int c) { STUB_PANIC("lex_unget"); }

static void lex_unget_unsave(lex_t *lex, int c) { STUB_PANIC("lex_unget_unsave"); }

static void lex_save_cached(lex_t *lex) { STUB_PANIC("lex_save_cached"); }

static void lex_free_string(lex_t *lex) { STUB_PANIC("lex_free_string"); }

/* assumes that str points to 'u' plus at least 4 valid hex digits */
static int32_t decode_unicode_escape(const char *str) { STUB_PANIC("decode_unicode_escape"); }

static void lex_scan_string(lex_t *lex, json_error_t *error) { STUB_PANIC("lex_scan_string"); }

#ifndef JANSSON_USING_CMAKE /* disabled if using cmake */
#if JSON_INTEGER_IS_LONG_LONG
#ifdef _MSC_VER /* Microsoft Visual Studio */
#define json_strtoint _strtoi64
#else
#define json_strtoint strtoll
#endif
#else
#define json_strtoint strtol
#endif
#endif

static int lex_scan_number(lex_t *lex, int c, json_error_t *error) { STUB_PANIC("lex_scan_number"); }

static int lex_scan(lex_t *lex, json_error_t *error) { STUB_PANIC("lex_scan"); }

static char *lex_steal_string(lex_t *lex, size_t *out_len) { STUB_PANIC("lex_steal_string"); }

static int lex_init(lex_t *lex, get_func get, size_t flags, void *data) { STUB_PANIC("lex_init"); }

static void lex_close(lex_t *lex) { STUB_PANIC("lex_close"); }

/*** parser ***/

static json_t *parse_value(lex_t *lex, size_t flags, json_error_t *error);

static json_t *parse_object(lex_t *lex, size_t flags, json_error_t *error) { STUB_PANIC("parse_object"); }

static json_t *parse_array(lex_t *lex, size_t flags, json_error_t *error) { STUB_PANIC("parse_array"); }

static json_t *parse_value(lex_t *lex, size_t flags, json_error_t *error) { STUB_PANIC("parse_value"); }

static json_t *parse_json(lex_t *lex, size_t flags, json_error_t *error) { STUB_PANIC("parse_json"); }

typedef struct {
    const char *data;
    size_t pos;
} string_data_t;

static int string_get(void *data) { STUB_PANIC("string_get"); }

json_t *json_loads(const char *string, size_t flags, json_error_t *error) { STUB_PANIC("json_loads"); }

typedef struct {
    const char *data;
    size_t len;
    size_t pos;
} buffer_data_t;

static int buffer_get(void *data) { STUB_PANIC("buffer_get"); }

json_t *json_loadb(const char *buffer, size_t buflen, size_t flags, json_error_t *error) { STUB_PANIC("json_loadb"); }

json_t *json_loadf(FILE *input, size_t flags, json_error_t *error) { STUB_PANIC("json_loadf"); }

static int fd_get_func(int *fd) { STUB_PANIC("fd_get_func"); }

json_t *json_loadfd(int input, size_t flags, json_error_t *error) { STUB_PANIC("json_loadfd"); }

json_t *json_load_file(const char *path, size_t flags, json_error_t *error) { STUB_PANIC("json_load_file"); }

#define MAX_BUF_LEN 1024

typedef struct {
    char data[MAX_BUF_LEN];
    size_t len;
    size_t pos;
    json_load_callback_t callback;
    void *arg;
} callback_data_t;

static int callback_get(void *data) { STUB_PANIC("callback_get"); }

json_t *json_load_callback(json_load_callback_t callback, void *arg, size_t flags,
                           json_error_t *error) { STUB_PANIC("json_load_callback"); }
