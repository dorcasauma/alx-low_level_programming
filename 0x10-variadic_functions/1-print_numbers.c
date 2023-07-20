#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Prints numbers followed by a new line.
 * separator: The string to be printed between the numbers (can be NULL).
 * n: The number of integers passed to the function.
 * ...: The variable number of integer arguments.
 *
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
va_start(args, n);
unsigned int i;
int num;
for (i = 0; i < n; i++)
{
num = va_arg(args, int);
printf("%d", num);

if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}

va_end(args);

printf("\n");
}
