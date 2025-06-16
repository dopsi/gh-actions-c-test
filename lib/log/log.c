#include "log.h"

#include <stdarg.h>
#include <stdio.h>
#include <string.h>

int log_write(log_level_t lvl, const char *fname, int line, const char *func, const char *fmt, ...) {
    int ret = 0;
    va_list va;
    va_start(va, fmt);

    switch(lvl) {
        case LOG_INFO:
            ret += printf("INFO ");
            break;
        default:
            break;
    }

    ret += printf("[%s:%d] %s: ", fname, line, func);
    ret += vprintf(fmt, va);

    va_end(va);

    size_t fmt_len = strlen(fmt);
    if (fmt[fmt_len-1] != '\n') {
        ret += printf("\n");
    }

    return ret;
}