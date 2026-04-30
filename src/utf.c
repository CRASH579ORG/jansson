/*
 * Copyright (c) 2009-2016 Petri Lehtinen <petri@digip.org>
 *
 * Jansson is free software; you can redistribute it and/or modify
 * it under the terms of the MIT license. See LICENSE for details.
 */

#include "utf.h"
#include <string.h>
#include "../commit0_stub.h"

int utf8_encode(int32_t codepoint, char *buffer, size_t *size) { STUB_PANIC("utf8_encode"); }

size_t utf8_check_first(char byte) { STUB_PANIC("utf8_check_first"); }

size_t utf8_check_full(const char *buffer, size_t size, int32_t *codepoint) { STUB_PANIC("utf8_check_full"); }

const char *utf8_iterate(const char *buffer, size_t bufsize, int32_t *codepoint) { STUB_PANIC("utf8_iterate"); }

int utf8_check_string(const char *string, size_t length) { STUB_PANIC("utf8_check_string"); }
