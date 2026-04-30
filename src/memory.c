/*
 * Copyright (c) 2009-2016 Petri Lehtinen <petri@digip.org>
 * Copyright (c) 2011-2012 Basile Starynkevitch <basile@starynkevitch.net>
 *
 * Jansson is free software; you can redistribute it and/or modify it
 * under the terms of the MIT license. See LICENSE for details.
 */

#include <stdlib.h>
#include <string.h>

#include "jansson.h"
#include "jansson_private.h"
#include "../commit0_stub.h"

/* C89 allows these to be macros */
#undef malloc
#undef realloc
#undef free

/* memory function pointers */
static json_malloc_t do_malloc = malloc;
static json_realloc_t do_realloc = realloc;
static json_free_t do_free = free;

void *jsonp_malloc(size_t size) { STUB_PANIC("jsonp_malloc"); }

void jsonp_free(void *ptr) { STUB_PANIC("jsonp_free"); }

void *jsonp_realloc(void *ptr, size_t originalSize, size_t newSize) { STUB_PANIC("jsonp_realloc"); }

char *jsonp_strndup(const char *str, size_t len) { STUB_PANIC("jsonp_strndup"); }

void json_set_alloc_funcs(json_malloc_t malloc_fn, json_free_t free_fn) { STUB_PANIC("json_set_alloc_funcs"); }

void json_set_alloc_funcs2(json_malloc_t malloc_fn, json_realloc_t realloc_fn,
                           json_free_t free_fn) { STUB_PANIC("json_set_alloc_funcs2"); }

void json_get_alloc_funcs(json_malloc_t *malloc_fn, json_free_t *free_fn) { STUB_PANIC("json_get_alloc_funcs"); }
void json_get_alloc_funcs2(json_malloc_t *malloc_fn, json_realloc_t *realloc_fn,
                           json_free_t *free_fn) { STUB_PANIC("json_get_alloc_funcs2"); }
