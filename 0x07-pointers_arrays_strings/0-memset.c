#include <stdio.h>
#include <stdlib.h>

/**
 * _memset - Fills memory with a constant byte.
 * *_memset – fills memory with a costant byte
 * Fills the first n bytes of the memory
 * area pointed to by s with the constant byte b.
 *
 *@s: a pointer to the memory area to be filled
 *@b: the constant byte to fill the memory area with
 *@n: the number of bytes to fill
 *
 * Return:a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned char *ptr = (unsigned char *) s;
unsigned int i;
for (i = 0; i < n; i++)
{
ptr[i] = (unsigned char) b;
}
return (s);
}
