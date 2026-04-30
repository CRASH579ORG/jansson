/*
 * Copyright (c) 2009-2016 Petri Lehtinen <petri@digip.org>
 * Copyright (c) 2011-2012 Graeme Smecher <graeme.smecher@mail.mcgill.ca>
 *
 * Jansson is free software; you can redistribute it and/or modify
 * it under the terms of the MIT license. See LICENSE for details.
 */

#include "jansson.h"
#include "jansson_private.h"
#include "utf.h"
#include <string.h>
#include "../commit0_stub.h"

typedef struct {
    int line;
    int column;
    size_t pos;
    char token;
} token_t;

typedef struct {
    const char *start;
    const char *fmt;
    token_t prev_token;
    token_t token;
    token_t next_token;
    json_error_t *error;
    size_t flags;
    int line;
    int column;
    size_t pos;
    int has_error;
} scanner_t;

#define token(scanner) ((scanner)->token.token)

static const char *const type_names[] = {"object", "array", "string", "integer",
                                         "real",   "true",  "false",  "null"};

#define type_name(x) type_names[json_typeof(x)]

static const char unpack_value_starters[] = "{[siIbfFOon";

static void scanner_init(scanner_t *s, json_error_t *error, size_t flags,
                         const char *fmt) { STUB_PANIC("scanner_init"); }

static void next_token(scanner_t *s) { STUB_PANIC("next_token"); }

static void prev_token(scanner_t *s) { STUB_PANIC("prev_token"); }

static void set_error(scanner_t *s, const char *source, enum json_error_code code,
                      const char *fmt, ...) { STUB_PANIC("set_error"); }

static json_t *pack(scanner_t *s, va_list *ap);

/* ours will be set to 1 if jsonp_free() must be called for the result
   afterwards */
static char *read_string(scanner_t *s, va_list *ap, const char *purpose, size_t *out_len,
                         int *ours, int optional) { STUB_PANIC("read_string"); }

static json_t *pack_object(scanner_t *s, va_list *ap) { STUB_PANIC("pack_object"); }

static json_t *pack_array(scanner_t *s, va_list *ap) { STUB_PANIC("pack_array"); }

static json_t *pack_string(scanner_t *s, va_list *ap) { STUB_PANIC("pack_string"); }

static json_t *pack_object_inter(scanner_t *s, va_list *ap, int need_incref) { STUB_PANIC("pack_object_inter"); }

static json_t *pack_integer(scanner_t *s, json_int_t value) { STUB_PANIC("pack_integer"); }

static json_t *pack_real(scanner_t *s, double value) { STUB_PANIC("pack_real"); }

static json_t *pack(scanner_t *s, va_list *ap) { STUB_PANIC("pack"); }

static int unpack(scanner_t *s, json_t *root, va_list *ap);

static int unpack_object(scanner_t *s, json_t *root, va_list *ap) { STUB_PANIC("unpack_object"); }

static int unpack_array(scanner_t *s, json_t *root, va_list *ap) { STUB_PANIC("unpack_array"); }

static int unpack(scanner_t *s, json_t *root, va_list *ap) { STUB_PANIC("unpack"); }

json_t *json_vpack_ex(json_error_t *error, size_t flags, const char *fmt, va_list ap) { STUB_PANIC("json_vpack_ex"); }

json_t *json_pack_ex(json_error_t *error, size_t flags, const char *fmt, ...) { STUB_PANIC("json_pack_ex"); }

json_t *json_pack(const char *fmt, ...) { STUB_PANIC("json_pack"); }

int json_vunpack_ex(json_t *root, json_error_t *error, size_t flags, const char *fmt,
                    va_list ap) { STUB_PANIC("json_vunpack_ex"); }

int json_unpack_ex(json_t *root, json_error_t *error, size_t flags, const char *fmt,
                   ...) { STUB_PANIC("json_unpack_ex"); }

int json_unpack(json_t *root, const char *fmt, ...) { STUB_PANIC("json_unpack"); }
