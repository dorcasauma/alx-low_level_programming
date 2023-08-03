#include <stdio.h>
/**
 * binary_to_uint - Convert a binary number to an unsigned int.
 * @b: A pointer to a string containing the binary number (0 and 1 chars).
 *
 * Return: The converted number, or 0 if there is one or more chars in the
 *         string @b that is not 0 or 1, or @b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
if (b == NULL)
return (0);
while (*b != '\0')
{
char c = *b;
if (c != '0' && c != '1')
return (0);
result = (result << 1) + (c - '0');
b++;
}
return (result);
}

