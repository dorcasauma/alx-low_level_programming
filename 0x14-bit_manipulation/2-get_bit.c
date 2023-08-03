#include <stdio.h>

/**
 * get_bit - Get the value of a bit at a given index.
 * @n: The number from which the bit value is extracted.
 * @index: The index of the bit to be retrieved (starting from 0).
 *
 * Return: The value of the bit at index index, or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mask = 1UL << index;
int bit_value = (n & mask) != 0;
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
return (bit_value);
}


