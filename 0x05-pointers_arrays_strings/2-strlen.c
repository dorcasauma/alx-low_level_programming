#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * int _strlen - returns length of a string
 * @s: string to be checked the length
 *@ _strlen returns len of a string
 *
 * This function returns the length of a string.
 *Return:0
 */


int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}

