#include <stdio.h>
#include <ctype.h>

/**
 * _islower - checks is a character is islower.
 *
 *@c: character to be checked.
 *Return: 1 if @c is lowercase, 0 otherwise.
 */

int _islower(int c)
{
if (islower(c))
return (1);
else
{
return (0);
}
}
