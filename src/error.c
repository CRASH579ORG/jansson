#include "jansson_private.h"
#include <string.h>
#include "../commit0_stub.h"

void jsonp_error_init(json_error_t *error, const char *source) { STUB_PANIC("jsonp_error_init"); }

void jsonp_error_set_source(json_error_t *error, const char *source) { STUB_PANIC("jsonp_error_set_source"); }

void jsonp_error_set(json_error_t *error, int line, int column, size_t position,
                     enum json_error_code code, const char *msg, ...) { STUB_PANIC("jsonp_error_set"); }

void jsonp_error_vset(json_error_t *error, int line, int column, size_t position,
                      enum json_error_code code, const char *msg, va_list ap) { STUB_PANIC("jsonp_error_vset"); }
