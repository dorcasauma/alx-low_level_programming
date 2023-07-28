#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: The first input string.
 * @s2: The second input string.
 *
 * Return: A pointer to the newly allocated concatenated string,
 *         or NULL if memory allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
size_t len1 = strlen(s1);
size_t len2 = strlen(s2);
char *concatenated = (char *)malloc((len1 + len2 + 1) * sizeof(char));
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
if (concatenated == NULL)
return (NULL);
strcpy(concatenated, s1);
strcat(concatenated, s2);
return (concatenated);
}
