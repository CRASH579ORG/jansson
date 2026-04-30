/*
 * Copyright (c) 2019 Sean Bright <sean.bright@gmail.com>
 *
 * Jansson is free software; you can redistribute it and/or modify
 * it under the terms of the MIT license. See LICENSE for details.
 */

#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif

#include "jansson.h"
#include "../commit0_stub.h"

const char *jansson_version_str(void) { STUB_PANIC("jansson_version_str"); }

int jansson_version_cmp(int major, int minor, int micro) { STUB_PANIC("jansson_version_cmp"); }
