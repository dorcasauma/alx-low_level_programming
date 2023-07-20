#include <stdio.h>
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...) {
va_list args;
va_start(args, n);

unsigned int;

for (i = 0; i < n; i++)
{
int num = va_arg(args, int);
printf("%d", num);

if (separator != NULL && i < n - 1) {
printf("%s", separator);
}
}

va_end(args);

printf("\n");
}
