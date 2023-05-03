#include <stdio.h>
/**
 *void _putst - prints a string followed by a new line.
 *@str: is the parameter
 *
 *Prints a string followed by a new line
 *
 *
 */
void _puts(char *str)
{
while (*str != '\0')
{

putchar(*str);
str++;
}
putchar('\n');
}
