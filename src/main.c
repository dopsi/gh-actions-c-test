#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "foo.h"
#include "log.h"

#include "config.h"

int main(void) {
    LOG_INF("start %s %s", GIT_DESC, GIT_DATE);
    srand(time(NULL));
    int i = rand();
    int j = foo_bar(j);
    printf("hello, world! %d -> %d\n", i, j);
}