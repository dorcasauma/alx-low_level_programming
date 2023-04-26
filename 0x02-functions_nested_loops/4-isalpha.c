#include <stdio.h>
#include <ctype.h>

/**
 * int _isalpha -checks for alphabetic character.
 *
 * Returns 1 if c is a letter, lowercase or uppercase,0 otherwise.
 */
int _isalpha(int c)
{
if (isalpha(c)){
if (isupper(c) || islower(c))
{
    return (1);
}

}
else
{
return (0);
}
}