#include <stdio.h>
/**
 * _strcat - Concatenates the string pointed to by `src` to the end of the string
 * pointed to by `dest`.
 *
 * @dest: A pointer to the destination string.
 * @src: A pointer to the source string.
 *
 * Return: A pointer to the resulting string (`dest`).
 */
char *_strcat(char *dest, char *src)
{
char *dest_end = dest;

while (*dest_end != '\0')
{
dest_end++;
}

while (*src != '\0')
{
*dest_end++ = *src++;
}

*dest_end = '\0';
return dest;
}
