#include "cagle.h"

#include <string.h>

char *greet(const char *name) {
    char dest[32];
    strcpy(dest, "Hello, ");
    char *str = strcat(dest, name);
    return str;
}
