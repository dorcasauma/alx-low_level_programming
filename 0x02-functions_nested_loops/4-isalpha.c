#include <stdio.h>
#include <ctype.h>

/**
 *_isalpha -checks for alphabetic character.
 *
 *@c: the character to check
 *
 * Return: 1 if c is a letter, lowercase or uppercase 0 otherwise.
 */
int _isalpha(int c)
{
if (isalpha(c))
{
if (isupper(c) || islower(c))
return (1);
}
return (0);
}

