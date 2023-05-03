#include <stdio.h>
/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: Pointer to the string to be measured.
 *
 * Return: no return value.
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
