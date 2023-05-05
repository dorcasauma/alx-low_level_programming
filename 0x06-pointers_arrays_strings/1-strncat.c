#include <string.h>
#include <stdio.h>

/**
 * *_strncat - Concatenates the first n characters of the
 * string pointed to by `src`

 *
 * This function overwrites the null byte ('\0')
 * at the end of `dest`
 * and then copies at  most `n` characters of `src` to the end of `dest`.
 * If `src` contains `n` or more characters,
 * the resulting string will
 * not be null-terminated.
 *
 * @dest: A pointer to the destination string.
 * @src:  A pointer to the source string.
 * @n The maximum number of characters to copy from `src`.
 *
 * @return A pointer to the resulting string (`dest`).
 */
char *_strncat(char *dest, const char *src, size_t n)
{
char *dest_end = dest;

while (*dest_end != '\0')
{
dest_end++;
}
while (*src != '\0' && n-- > 0)
{
*dest_end++ = *src++;
}
*dest_end = '\0';
return dest;
}

