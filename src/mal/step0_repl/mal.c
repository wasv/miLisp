#include "mal.h"

#include <string.h>

milisp_err_t milisp_rep(char *source, char *result_buf, size_t result_buf_len) {
    memset(result_buf, 0, result_buf_len);
    strncpy(result_buf, source, result_buf_len);
    return 0;
}
