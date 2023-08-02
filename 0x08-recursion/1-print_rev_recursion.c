#include <stdio.h>

/**
 * _print_rev_recursion - Prints a string in reverse using recursion.
 * @s: A pointer to the input string.
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
return;
_print_rev_recursion(s + 1);
putchar(*s);
}
