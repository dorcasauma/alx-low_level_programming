#include <stdio.h>

/**
 * factorial - Returns the factorial of a given number.
 * @n: The input number.
 * Return: The factorial of the number, or -1 if there's an error.
 */
int factorial(int n)
{
if (n == 0)
return (1);
if (n < 0)
return (-1);
return (n * factorial(n - 1));
}
