/*
 * Copyright (c) 2009-2016 Petri Lehtinen <petri@digip.org>
 *
 * This library is free software; you can redistribute it and/or modify
 * it under the terms of the MIT license. See LICENSE for details.
 */

#ifdef HAVE_CONFIG_H
#include <jansson_private_config.h>
#endif

#include <stdlib.h>
#include <string.h>

#ifdef HAVE_STDINT_H
#include <stdint.h>
#endif

#include "hashtable.h"
#include "jansson_private.h" /* for container_of() */
#include <jansson_config.h>  /* for JSON_INLINE */

#ifndef INITIAL_HASHTABLE_ORDER
#define INITIAL_HASHTABLE_ORDER 3
#endif

typedef struct hashtable_list list_t;
typedef struct hashtable_pair pair_t;
typedef struct hashtable_bucket bucket_t;

extern volatile uint32_t hashtable_seed;

/* Implementation of the hash function */
#include "lookup3.h"
#include "../commit0_stub.h"

#define list_to_pair(list_)         container_of(list_, pair_t, list)
#define ordered_list_to_pair(list_) container_of(list_, pair_t, ordered_list)
#define hash_str(key, len)          ((size_t)hashlittle((key), len, hashtable_seed))

static JSON_INLINE void list_init(list_t *list) { STUB_PANIC("list_init"); }

static JSON_INLINE void list_insert(list_t *list, list_t *node) { STUB_PANIC("list_insert"); }

static JSON_INLINE void list_remove(list_t *list) { STUB_PANIC("list_remove"); }

static JSON_INLINE int bucket_is_empty(hashtable_t *hashtable, bucket_t *bucket) { STUB_PANIC("bucket_is_empty"); }

static void insert_to_bucket(hashtable_t *hashtable, bucket_t *bucket, list_t *list) { STUB_PANIC("insert_to_bucket"); }

static pair_t *hashtable_find_pair(hashtable_t *hashtable, bucket_t *bucket,
                                   const char *key, size_t key_len, size_t hash) { STUB_PANIC("hashtable_find_pair"); }

/* returns 0 on success, -1 if key was not found */
static int hashtable_do_del(hashtable_t *hashtable, const char *key, size_t key_len,
                            size_t hash) { STUB_PANIC("hashtable_do_del"); }

static void hashtable_do_clear(hashtable_t *hashtable) { STUB_PANIC("hashtable_do_clear"); }

static int hashtable_do_rehash(hashtable_t *hashtable) { STUB_PANIC("hashtable_do_rehash"); }

int hashtable_init(hashtable_t *hashtable) { STUB_PANIC("hashtable_init"); }

void hashtable_close(hashtable_t *hashtable) { STUB_PANIC("hashtable_close"); }

static pair_t *init_pair(json_t *value, const char *key, size_t key_len, size_t hash) { STUB_PANIC("init_pair"); }

int hashtable_set(hashtable_t *hashtable, const char *key, size_t key_len,
                  json_t *value) { STUB_PANIC("hashtable_set"); }

void *hashtable_get(hashtable_t *hashtable, const char *key, size_t key_len) { STUB_PANIC("hashtable_get"); }

int hashtable_del(hashtable_t *hashtable, const char *key, size_t key_len) { STUB_PANIC("hashtable_del"); }

void hashtable_clear(hashtable_t *hashtable) { STUB_PANIC("hashtable_clear"); }

void *hashtable_iter(hashtable_t *hashtable) { STUB_PANIC("hashtable_iter"); }

void *hashtable_iter_at(hashtable_t *hashtable, const char *key, size_t key_len) { STUB_PANIC("hashtable_iter_at"); }

void *hashtable_iter_next(hashtable_t *hashtable, void *iter) { STUB_PANIC("hashtable_iter_next"); }

void *hashtable_iter_key(void *iter) { STUB_PANIC("hashtable_iter_key"); }

size_t hashtable_iter_key_len(void *iter) { STUB_PANIC("hashtable_iter_key_len"); }

void *hashtable_iter_value(void *iter) { STUB_PANIC("hashtable_iter_value"); }

void hashtable_iter_set(void *iter, json_t *value) { STUB_PANIC("hashtable_iter_set"); }
