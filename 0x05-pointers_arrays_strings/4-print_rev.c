#include <stdio.h>
/**
 * print_rev - reverses a string
 * @s: is the string to be reversed
 *
 *
 *reverses a string
 *
 */

void print_rev(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
while (len > 0)
{
putchar(*(s - len));
len--;
}
putchar('\n');
}
