#include <stdio.h>
/**
 * puts2-prints every other character
 * \n of a string, starting with the first character,
 * followed by a new line.
 *
 * @str - the string to point
 *Return: void
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
