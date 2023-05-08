#include <stdio.h>
#include <stdlib.h>

/**
 * _memcpy - Copies n bytes from memory area src to memory area dest.
 *
 * @dest: A pointer to the destination memory area
 * @src: A pointer to the source memory area
 * @n: The number of bytes to copy
 *
 * Return: A pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned char *dest_ptr = (unsigned char *) dest;
unsigned char *src_ptr = (unsigned char *) src;
unsigned int i;
for (i = 0; i < n; i++)
{
dest_ptr[i] = src_ptr[i];
}

return (dest);
}

