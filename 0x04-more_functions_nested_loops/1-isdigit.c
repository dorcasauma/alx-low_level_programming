#include <stdio.h>
#include <ctype.h>

/**
 * int _isdigit - checks is a character is digit.
 *
 *@c: character to be checked.
 *Return: 1 if @c is diigt, 0 otherwise.
 */

int _isupper(int c)
{
if (isdigit(c))
return (1);
else
{
return (0);
}
}
