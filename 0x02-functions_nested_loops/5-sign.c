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
printf("%c", '+');
return (1);
}
else if (n == 0)
{
printf("%c", '0');
return (0);
}
else
{
printf("%c", '-');
return (-1);
}
}
