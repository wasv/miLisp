#include "mal.h"

#include <stdio.h>

#define MAX_LINE 1024

int main(int argc, char **argv) {
    char *line = NULL;
    ssize_t line_len = 0;
    size_t line_buf_len = 0;
    char outbuf[MAX_LINE];

    uint8_t exit = 0;
    while(!exit) {
        printf("user> ");
        line_len = getline(&line, &line_buf_len, stdin);
        if(line_len >= 0) {
            milisp_rep(line, outbuf, MAX_LINE);
            printf("%s", outbuf);
        } else {
            printf("\n");
            exit = 1;
        }
    }
    free(line);

    return 0;
}
