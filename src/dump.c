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

#define MAX_INTEGER_STR_LENGTH 25
#define MAX_REAL_STR_LENGTH    25

#define FLAGS_TO_INDENT(f)    ((f) & 0x1F)
#define FLAGS_TO_PRECISION(f) (((f) >> 11) & 0x1F)

struct buffer {
    const size_t size;
    size_t used;
    char *data;
};

static int dump_to_strbuffer(const char *buffer, size_t size, void *data) { STUB_PANIC("dump_to_strbuffer"); }

static int dump_to_buffer(const char *buffer, size_t size, void *data) { STUB_PANIC("dump_to_buffer"); }

static int dump_to_file(const char *buffer, size_t size, void *data) { STUB_PANIC("dump_to_file"); }

static int dump_to_fd(const char *buffer, size_t size, void *data) { STUB_PANIC("dump_to_fd"); }

/* 32 spaces (the maximum indentation size) */
static const char whitespace[] = "                                ";

static int dump_indent(size_t flags, int depth, int space, json_dump_callback_t dump,
                       void *data) { STUB_PANIC("dump_indent"); }

static int dump_string(const char *str, size_t len, json_dump_callback_t dump, void *data,
                       size_t flags) { STUB_PANIC("dump_string"); }

struct key_len {
    const char *key;
    int len;
};

static int compare_keys(const void *key1, const void *key2) { STUB_PANIC("compare_keys"); }

static int do_dump(const json_t *json, size_t flags, int depth, hashtable_t *parents,
                   json_dump_callback_t dump, void *data) { STUB_PANIC("do_dump"); }

char *json_dumps(const json_t *json, size_t flags) { STUB_PANIC("json_dumps"); }

size_t json_dumpb(const json_t *json, char *buffer, size_t size, size_t flags) { STUB_PANIC("json_dumpb"); }

int json_dumpf(const json_t *json, FILE *output, size_t flags) { STUB_PANIC("json_dumpf"); }

int json_dumpfd(const json_t *json, int output, size_t flags) { STUB_PANIC("json_dumpfd"); }

int json_dump_file(const json_t *json, const char *path, size_t flags) { STUB_PANIC("json_dump_file"); }

int json_dump_callback(const json_t *json, json_dump_callback_t callback, void *data,
                       size_t flags) { STUB_PANIC("json_dump_callback"); }
