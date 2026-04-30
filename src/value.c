/*
 * Copyright (c) 2009-2016 Petri Lehtinen <petri@digip.org>
 *
 * Jansson is free software; you can redistribute it and/or modify
 * it under the terms of the MIT license. See LICENSE for details.
 */

#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif

#ifdef HAVE_CONFIG_H
#include <jansson_private_config.h>
#endif

#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

#ifdef HAVE_STDINT_H
#include <stdint.h>
#endif

#include "hashtable.h"
#include "jansson.h"
#include "jansson_private.h"
#include "utf.h"
#include "../commit0_stub.h"

/* Work around nonstandard isnan() and isinf() implementations */
#ifndef isnan
#ifndef __sun
static JSON_INLINE int isnan(double x) { STUB_PANIC("isnan"); }
#endif
#endif
#ifndef isinf
static JSON_INLINE int isinf(double x) { STUB_PANIC("isinf"); }
#endif

json_t *do_deep_copy(const json_t *json, hashtable_t *parents);

static JSON_INLINE void json_init(json_t *json, json_type type) { STUB_PANIC("json_init"); }

int jsonp_loop_check(hashtable_t *parents, const json_t *json, char *key, size_t key_size,
                     size_t *key_len_out) { STUB_PANIC("jsonp_loop_check"); }

/*** object ***/

extern volatile uint32_t hashtable_seed;

json_t *json_object(void) { STUB_PANIC("json_object"); }

static void json_delete_object(json_object_t *object) { STUB_PANIC("json_delete_object"); }

size_t json_object_size(const json_t *json) { STUB_PANIC("json_object_size"); }

json_t *json_object_get(const json_t *json, const char *key) { STUB_PANIC("json_object_get"); }

json_t *json_object_getn(const json_t *json, const char *key, size_t key_len) { STUB_PANIC("json_object_getn"); }

int json_object_set_new_nocheck(json_t *json, const char *key, json_t *value) { STUB_PANIC("json_object_set_new_nocheck"); }

int json_object_setn_new_nocheck(json_t *json, const char *key, size_t key_len,
                                 json_t *value) { STUB_PANIC("json_object_setn_new_nocheck"); }

int json_object_set_new(json_t *json, const char *key, json_t *value) { STUB_PANIC("json_object_set_new"); }

int json_object_setn_new(json_t *json, const char *key, size_t key_len, json_t *value) { STUB_PANIC("json_object_setn_new"); }

int json_object_del(json_t *json, const char *key) { STUB_PANIC("json_object_del"); }

int json_object_deln(json_t *json, const char *key, size_t key_len) { STUB_PANIC("json_object_deln"); }

int json_object_clear(json_t *json) { STUB_PANIC("json_object_clear"); }

int json_object_update(json_t *object, json_t *other) { STUB_PANIC("json_object_update"); }

int json_object_update_existing(json_t *object, json_t *other) { STUB_PANIC("json_object_update_existing"); }

int json_object_update_missing(json_t *object, json_t *other) { STUB_PANIC("json_object_update_missing"); }

int do_object_update_recursive(json_t *object, json_t *other, hashtable_t *parents) { STUB_PANIC("do_object_update_recursive"); }

int json_object_update_recursive(json_t *object, json_t *other) { STUB_PANIC("json_object_update_recursive"); }

void *json_object_iter(json_t *json) { STUB_PANIC("json_object_iter"); }

void *json_object_iter_at(json_t *json, const char *key) { STUB_PANIC("json_object_iter_at"); }

void *json_object_iter_next(json_t *json, void *iter) { STUB_PANIC("json_object_iter_next"); }

const char *json_object_iter_key(void *iter) { STUB_PANIC("json_object_iter_key"); }

size_t json_object_iter_key_len(void *iter) { STUB_PANIC("json_object_iter_key_len"); }

json_t *json_object_iter_value(void *iter) { STUB_PANIC("json_object_iter_value"); }

int json_object_iter_set_new(json_t *json, void *iter, json_t *value) { STUB_PANIC("json_object_iter_set_new"); }

void *json_object_key_to_iter(const char *key) { STUB_PANIC("json_object_key_to_iter"); }

static int json_object_equal(const json_t *object1, const json_t *object2) { STUB_PANIC("json_object_equal"); }

static json_t *json_object_copy(json_t *object) { STUB_PANIC("json_object_copy"); }

static json_t *json_object_deep_copy(const json_t *object, hashtable_t *parents) { STUB_PANIC("json_object_deep_copy"); }

/*** array ***/

json_t *json_array(void) { STUB_PANIC("json_array"); }

static void json_delete_array(json_array_t *array) { STUB_PANIC("json_delete_array"); }

size_t json_array_size(const json_t *json) { STUB_PANIC("json_array_size"); }

json_t *json_array_get(const json_t *json, size_t index) { STUB_PANIC("json_array_get"); }

int json_array_set_new(json_t *json, size_t index, json_t *value) { STUB_PANIC("json_array_set_new"); }

static void array_move(json_array_t *array, size_t dest, size_t src, size_t count) { STUB_PANIC("array_move"); }

static void array_copy(json_t **dest, size_t dpos, json_t **src, size_t spos,
                       size_t count) { STUB_PANIC("array_copy"); }

static json_t **json_array_grow(json_array_t *array, size_t amount) { STUB_PANIC("json_array_grow"); }

int json_array_append_new(json_t *json, json_t *value) { STUB_PANIC("json_array_append_new"); }

int json_array_insert_new(json_t *json, size_t index, json_t *value) { STUB_PANIC("json_array_insert_new"); }

int json_array_remove(json_t *json, size_t index) { STUB_PANIC("json_array_remove"); }

int json_array_clear(json_t *json) { STUB_PANIC("json_array_clear"); }

int json_array_extend(json_t *json, json_t *other_json) { STUB_PANIC("json_array_extend"); }

static int json_array_equal(const json_t *array1, const json_t *array2) { STUB_PANIC("json_array_equal"); }

static json_t *json_array_copy(json_t *array) { STUB_PANIC("json_array_copy"); }

static json_t *json_array_deep_copy(const json_t *array, hashtable_t *parents) { STUB_PANIC("json_array_deep_copy"); }

/*** string ***/

static json_t *string_create(const char *value, size_t len, int own) { STUB_PANIC("string_create"); }

json_t *json_string_nocheck(const char *value) { STUB_PANIC("json_string_nocheck"); }

json_t *json_stringn_nocheck(const char *value, size_t len) { STUB_PANIC("json_stringn_nocheck"); }

/* this is private; "steal" is not a public API concept */
json_t *jsonp_stringn_nocheck_own(const char *value, size_t len) { STUB_PANIC("jsonp_stringn_nocheck_own"); }

json_t *json_string(const char *value) { STUB_PANIC("json_string"); }

json_t *json_stringn(const char *value, size_t len) { STUB_PANIC("json_stringn"); }

const char *json_string_value(const json_t *json) { STUB_PANIC("json_string_value"); }

size_t json_string_length(const json_t *json) { STUB_PANIC("json_string_length"); }

int json_string_set_nocheck(json_t *json, const char *value) { STUB_PANIC("json_string_set_nocheck"); }

int json_string_setn_nocheck(json_t *json, const char *value, size_t len) { STUB_PANIC("json_string_setn_nocheck"); }

int json_string_set(json_t *json, const char *value) { STUB_PANIC("json_string_set"); }

int json_string_setn(json_t *json, const char *value, size_t len) { STUB_PANIC("json_string_setn"); }

static void json_delete_string(json_string_t *string) { STUB_PANIC("json_delete_string"); }

static int json_string_equal(const json_t *string1, const json_t *string2) { STUB_PANIC("json_string_equal"); }

static json_t *json_string_copy(const json_t *string) { STUB_PANIC("json_string_copy"); }

json_t *json_vsprintf(const char *fmt, va_list ap) { STUB_PANIC("json_vsprintf"); }

json_t *json_sprintf(const char *fmt, ...) { STUB_PANIC("json_sprintf"); }

/*** integer ***/

json_t *json_integer(json_int_t value) { STUB_PANIC("json_integer"); }

json_int_t json_integer_value(const json_t *json) { STUB_PANIC("json_integer_value"); }

int json_integer_set(json_t *json, json_int_t value) { STUB_PANIC("json_integer_set"); }

static void json_delete_integer(json_integer_t *integer) { STUB_PANIC("json_delete_integer"); }

static int json_integer_equal(const json_t *integer1, const json_t *integer2) { STUB_PANIC("json_integer_equal"); }

static json_t *json_integer_copy(const json_t *integer) { STUB_PANIC("json_integer_copy"); }

/*** real ***/

json_t *json_real(double value) { STUB_PANIC("json_real"); }

double json_real_value(const json_t *json) { STUB_PANIC("json_real_value"); }

int json_real_set(json_t *json, double value) { STUB_PANIC("json_real_set"); }

static void json_delete_real(json_real_t *real) { STUB_PANIC("json_delete_real"); }

static int json_real_equal(const json_t *real1, const json_t *real2) { STUB_PANIC("json_real_equal"); }

static json_t *json_real_copy(const json_t *real) { STUB_PANIC("json_real_copy"); }

/*** number ***/

double json_number_value(const json_t *json) { STUB_PANIC("json_number_value"); }

/*** simple values ***/

json_t *json_true(void) { STUB_PANIC("json_true"); }

json_t *json_false(void) { STUB_PANIC("json_false"); }

json_t *json_null(void) { STUB_PANIC("json_null"); }

/*** deletion ***/

void json_delete(json_t *json) { STUB_PANIC("json_delete"); }

/*** equality ***/

int json_equal(const json_t *json1, const json_t *json2) { STUB_PANIC("json_equal"); }

/*** copying ***/

json_t *json_copy(json_t *json) { STUB_PANIC("json_copy"); }

json_t *json_deep_copy(const json_t *json) { STUB_PANIC("json_deep_copy"); }

json_t *do_deep_copy(const json_t *json, hashtable_t *parents) { STUB_PANIC("do_deep_copy"); }
