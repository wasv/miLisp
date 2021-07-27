#pragma once

#include <stdint.h>
#include <stdlib.h>

typedef int32_t milisp_err_t;

milisp_err_t milisp_rep(char *source, char *result_buf, size_t result_buf_len);
