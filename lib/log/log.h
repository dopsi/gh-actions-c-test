#ifndef LOG_H
#define LOG_H

typedef enum {
    LOG_FATAL,
    LOG_CRITICAL,
    LOG_ERROR,
    LOG_WARN,
    LOG_INFO,
    LOG_DEBUG,
} log_level_t;

#define LOG_INF(...) log_write(LOG_INFO, __FILE__, __LINE__, __FUNCTION__, __VA_ARGS__)

int log_write(log_level_t lvl, const char *fname, int line, const char *func, const char *fmt, ...);

#endif // LOG_H