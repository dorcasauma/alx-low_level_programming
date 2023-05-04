#include <string.h>
#include <stdio.h>

/**
 * *_strncat - Concatenates the first n characters of the string \n pointed to by `src`
 * to the end of the string \n pointed to by `dest`.
 *
 * This function overwrites \n the null byte ('\0') at the end of `dest`
 * and then copies at \n  most `n` characters of `src` to the end of `dest`.
 * If `src` contains `n` or more \n characters, the resulting string will
 * not be null-terminated.
 *
 * @param dest A pointer to the destination string.
 * @param src A pointer to the source string.
 * @param n The maximum number of characters to copy from `src`.
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

