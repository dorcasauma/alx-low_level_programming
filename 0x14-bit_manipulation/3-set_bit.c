#include <stdio.h>

/**
 * set_bit - Set the value of a bit to 1 at a given index.
 * @n: A pointer to the number in which the bit is to be set.
 * @index: The index of the bit to be set (starting from 0).
 *
 * Return: 1 if it worked, or -1 if an error occurred (e.g., if index is out of range).
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = 1UL << index;
if (index >= sizeof(unsigned long int) * 8) {
return (-1);
}
*n |= mask;
return (1);
}
