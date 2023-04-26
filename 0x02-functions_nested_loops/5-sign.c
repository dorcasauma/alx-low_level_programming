#include <stdio.h>

/**
 * print_sign - prints the sign of a number.
 *
 * @n: the number to check
 *
 * Return: 1 if n is greater than zero, 0 if n is zero, -1 if n is less than zero.
 */
int print_sign(int n)
{
if (n > 0)
{
putchar('+');
putchar('1');
putchar(',');
putchar(' ');
putchar(5 + '0');
putchar('\n');
return (1);
putchar('+');
}
else if (n == 0)
{
putchar('0');
return (0);
}
else
{
putchar('-');
return (-1);
}
}
