#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           containing a copy of the string given as a parameter.
 * @str: The input string to be duplicated.
 *
 * Return: A pointer to the duplicated string, or NULL if str is NULL or
 *         if there was insufficient memory to duplicate the string.
 */
char *_strdup(char *str)
{
size_t i;
size_t length = 0;
char *duplicate = (char *)malloc((length + 1) * sizeof(char));
if (str == NULL)
return (NULL);
while (str[length] != '\0')
{
length++;
}
if (duplicate == NULL)
return (NULL);
for (i = 0; i <= length; i++)
{
duplicate[i] = str[i];
}

return (duplicate);
}
