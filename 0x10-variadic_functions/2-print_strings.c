#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints a variable number of strings, separated by
 * a specified separator.
 *
 * @separator: The separator to be printed between the strings.
 * @n: The number of strings to be printed.
 * @...: The variable number of strings to print.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
va_start(args, n);

for (i = 0; i < n; i++)
{
char *str = va_arg(args, char*);

if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}

if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}

va_end(args);

printf("\n");
}
