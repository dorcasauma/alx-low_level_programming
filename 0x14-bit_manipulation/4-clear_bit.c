#include <stdio.h>
/**
 * clear_bit - Clear a bit at a specified index.
 *
 * @n: A pointer to an unsigned long int.
 * @index: The index of the bit to clear.
 *
 * Return: 1 if successful, or -1 if an error occurs.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
*n &= ~(1UL << index);
return (1);
}
