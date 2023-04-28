#include <ctype.h>

/**
 * _isdigit - Checks if a character is a digit (0-9)
 * @param c The character to check
 * Return:1 value if the character is a digit, 0 otherwise
 */

int _isdigit(int c)
{
if (isdigit(c))
return (1);
else
{
return (0);
}
}
