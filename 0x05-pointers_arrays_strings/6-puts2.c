#include <stdio.h>
/**
 * puts2-prints every other character
 * \n of a string, starting with the first character,
 * followed by a new line.
 *
 * @param str - pointer to a null-terminated string to be printed
 */
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
putchar(str[i]);
i += 2;
}
putchar('\n');
}
