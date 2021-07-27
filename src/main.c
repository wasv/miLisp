#include "mal.h"

#include <stdio.h>

#define MAX_LINE 1024

int main(int argc, char **argv) {
    milisp_err_t err = 0;

    while(err == 0) {
        char *line = NULL;
        size_t line_len = 0;
        char outbuf[MAX_LINE];

        printf("user> ");
        getline(&line, &line_len, stdin);
        err = milisp_rep(line, outbuf, MAX_LINE);
        printf("%s", outbuf);
    }

    return 0;
}
