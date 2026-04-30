/*
 * Copyright (c) 2009-2016 Petri Lehtinen <petri@digip.org>
 *
 * Jansson is free software; you can redistribute it and/or modify
 * it under the terms of the MIT license. See LICENSE for details.
 */

#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif

#include "strbuffer.h"
#include "jansson_private.h"
#include <stdlib.h>
#include <string.h>
#include "../commit0_stub.h"

#define STRBUFFER_MIN_SIZE 16
#define STRBUFFER_FACTOR   2
#define STRBUFFER_SIZE_MAX ((size_t)(-1))

int strbuffer_init(strbuffer_t *strbuff) { STUB_PANIC("strbuffer_init"); }

void strbuffer_close(strbuffer_t *strbuff) { STUB_PANIC("strbuffer_close"); }

void strbuffer_clear(strbuffer_t *strbuff) { STUB_PANIC("strbuffer_clear"); }

const char *strbuffer_value(const strbuffer_t *strbuff) { STUB_PANIC("strbuffer_value"); }

char *strbuffer_steal_value(strbuffer_t *strbuff) { STUB_PANIC("strbuffer_steal_value"); }

int strbuffer_append_byte(strbuffer_t *strbuff, char byte) { STUB_PANIC("strbuffer_append_byte"); }

int strbuffer_append_bytes(strbuffer_t *strbuff, const char *data, size_t size) { STUB_PANIC("strbuffer_append_bytes"); }

char strbuffer_pop(strbuffer_t *strbuff) { STUB_PANIC("strbuffer_pop"); }
