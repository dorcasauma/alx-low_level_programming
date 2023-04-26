#include <stdlib.h>
#include <stdio.h>

/**
 * int print_last_digit - prints the last digit of a number
 *
 * @int: the integer to print
 * Return: 0 prints the last digit of a number
 *
 */

int print_last_digit(int r)
{
int k =  r%10;
putchar(k + '0');
return (k);
}
