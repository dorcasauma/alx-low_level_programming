#include <stdio.h>

/**
 * Returns the value of the last digit of a given number.
 *
 * @param num: The number to extract the last digit from.
 * Return The value of the last digit.
 */
int print_last_digit(int num)
{
int last_digit = num % 10;
printf("The last digit of %d is %d\n", num, last_digit);
return (last_digit);
}
