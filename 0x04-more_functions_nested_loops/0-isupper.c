#include <stdio.h>
#include <ctype.h>

/**
 * int _isupper - checks is a character is uppercase.
 *
 *@c: character to be checked.
 *Return: 1 if @c is lowercase, 0 otherwise.
 */

int _isupper(int c)
{
if (isupper(c))
return (1);
else
{
return (0);
}
}
