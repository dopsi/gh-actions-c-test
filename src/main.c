#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "foo.h"

int main(void) {
    srand(time(NULL));
    int i = rand();
    printf("hello, world! %d -> %d\n", i, foo_bar(i));
}