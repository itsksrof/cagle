#include "cagle.h"

#include <assert.h>
#include <string.h>
#include <stdio.h>

void test_greet() {
    char *str = greet("cagle");
    int ret = strcmp(str, "Hello, cagle");
    if (ret != 0) {
        fprintf(stderr, "test_greet failed\n");
        return;
    }

    fprintf(stdout, "test_greet passed\n");
    return;
}

int main(void) {
    // Test greet
    test_greet();
    return 0;
}
