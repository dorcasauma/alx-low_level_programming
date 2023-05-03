#include <stdio.h>
#include <string.h>
/**
 * puts_half - Prints half of a string.
 * @str: Pointer to the string to be printed.
 *
 * Return: void.
 */
void puts_half(char *str)
{
int len = strlen(str);
int start = len / 2;
if (len % 2 != 0)
{
start += 1;
}
}
