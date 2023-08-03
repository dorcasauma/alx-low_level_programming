#include <stdio.h>

/**
 * print_binary - Print the binary representation of a number.
 * @n: The number to be printed in binary representation.
 *
 * Format: The binary representation will be printed without leading zeros.
 *         If the number is 0, it will simply print "0".
 */
void print_binary(unsigned long int n)
{
unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
while ((mask & n) == 0 && mask > 0)
{
mask >>= 1;
}
if (mask == 0)
{
putchar('0');
return;
}
while (mask > 0)
{
putchar((n & mask) ? '1' : '0');
mask >>= 1;
}
}
