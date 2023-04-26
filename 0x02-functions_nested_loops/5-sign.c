#include <stdio.h>

/**
 * print_sign - prints the sign of a number.
 *
 * @n: the number to check
 *
 * Return: 1 if n is greater than zero, 0 if n is zero, -1 if n is less than zero.
 */
void print_sign(int n)
{
if (n > 0)
{
printf("%c %d", '+', n);
}
else if (n == 0)
{
printf("%c", '0');
}
else
{
printf("%c", '-');
}
}
