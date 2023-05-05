#include <string.h>

/**
 * _strncpy - Copies at most `n` characters from the
 * string pointed to by `src`
 * (including the terminating null character)
 * into the array pointed to by `dest`.
 *
 * If the length of `src` is less than  `n`,
 *  the remaining characters in
 * the destination array are filled with null bytes ('\0').
 *
 * @param dest A pointer to the destination array.
 * @param src A pointer to the source string.
 * @param n The maximum number of characters to copy.
 * @return A pointer to the destination array (`dest`).
 * @return _strncpy A pointer to the destination array (`dest`)
 */
char *_strncpy(char *dest, const char *src, size_t n)
{
size_t i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}

return dest;
}
