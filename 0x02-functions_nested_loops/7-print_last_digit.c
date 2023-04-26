#include <stdlib.h>
#include <stdio.h>

/**
 * int print_last_digit - prints the last digit of a number
 *
 * @int: the integer to print
 * Return: the value of the last digit
 *
 */

int print_last_digit(int r)
{
int k =  r%10;
printf(" %d", k);
return (k);
}
