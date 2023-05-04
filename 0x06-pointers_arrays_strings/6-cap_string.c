#include <stdio.h>
/**
 * cap_string - Capitalizes all words of a string.
 * @str: Pointer to the string to be capitalized.
 *
 * This function takes a string pointed to by @str and \n capitalizes the first
 * letter of each word. It then returns a pointer to the \n capitalized string.
 * Words are delimited by \n whitespace characters and punctuation marks.
 */
char *cap_string(char *str)
{
int i;
{
str[0] = str[0] - 32;

for (i = 1; str[i] != '\0'; i++)
{

if ((str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n'
|| str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.'
|| str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"'
|| str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{'
|| str[i - 1] == '}') && (str[i] >= 'a' && str[i] <= 'z'))
{
str[i] = str[i] - 32; // Subtract 32 to convert lowercase to uppercase
}
}

return (str);
}
}
