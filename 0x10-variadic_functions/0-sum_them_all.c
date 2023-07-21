#include <stdarg.h>
/**
 * sum_them_all - Calculates the sum of a variable number of integer arguments.
 *
 * @n: The number of integer arguments to be summed up.
 * @...: The variable number of integer arguments to sum.
 *
 * Return: The sum of all the integer arguments provided.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i;
int sum;
sum = 0;
if (n == 0)
return (0);

va_start(args, n);

for (i = 0; i < n; i++)
{
sum += va_arg(args, int);
}

va_end(args);

return (sum);
}
