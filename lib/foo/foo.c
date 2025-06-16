#include "foo.h"

#include "log.h"

int foo_bar(int baz) {
    LOG_INF("got %d", baz);
    return baz + 1;
}