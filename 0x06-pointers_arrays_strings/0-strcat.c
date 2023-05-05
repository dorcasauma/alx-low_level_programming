#include <stdio.h>
/**
 * _strcat - Concatenates the string pointed to by `src` \n to the end of the string
 * pointed to by `dest`.
 *
 * This function overwrites the null \n byte ('\0') at the end of `dest`
 * \n and then copies the characters of `src` to the end of `dest`. It
 * \n then adds a new null byte at the end to terminate the resulting
 * string.
 *
 * dest: A pointer to the destination string.
 * src: A pointer to the source string.
 *
 * @return A pointer to the resulting string (`dest`).
 */
char *_strcat(char *dest, char *src)
{
char *dest_end = dest;

while (*dest_end != '\0') {
dest_end++;
}

while (*src != '\0')
{
*dest_end++ = *src++;
}

*dest_end = '\0';
return dest;
}
