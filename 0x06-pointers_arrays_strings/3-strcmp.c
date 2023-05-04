#include <string.h>

/**
 * _strcmp - Compares the string pointed to by `s1` to the \n string pointed to by `s2`.
 *
 * @param s1 A pointer to the first string to compare.
 * @param s2 A pointer to the second string to compare.
 *
 * @return An integer less than, equal to, or greater than zero if `s1`
 *         \n is found, respectively, to be less than, to match, or be greater
 *         than `s2`.
 */
int _strcmp(const char *s1, const char *s2)
{
int i = 0;

while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] < s2[i])
{
return -1;
}
else if (s1[i] > s2[i])
{
return 1;
}
i++;
}

if (s1[i] == '\0' && s2[i] == '\0')
{
return 0;
} else if (s1[i] == '\0')
{
return -1;
}
else
{
return 1;
}
}
