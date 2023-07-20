#include <stdio.h>
#include <stdarg.h>
void print_numbers(const char *separator, const unsigned int n, ...) {
    va_list args;
    va_start(args, n);

    unsigned int i; // Move the variable declaration here
    int num; // Move the variable declaration here

    for (i = 0; i < n; i++) {
        num = va_arg(args, int);
        printf("%d", num);

        if (separator != NULL && i < n - 1) {
            printf("%s", separator);
        }
    }

    va_end(args);

    printf("\n");
}
