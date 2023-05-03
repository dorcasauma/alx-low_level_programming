#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * int _strlen - returns length of a string
 * @char s: string to check the length
 *
 * This function returns the length of a string.
 */


int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return len;
}

