#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: Number of arguments.
 * @av: Array of pointers to arguments.
 *
 * Return: Pointer to a new string, or NULL if it fails.
 *         Each argument is followed by a \n in the new string.
 */
char *argstostr(int ac, char **av)
{
int total_length = 0;
int i, j, k = 0;
char *result = (char *)malloc((total_length + 1) * sizeof(char));
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
total_length++;
total_length++;
}
if (result == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
result[k] = av[i][j];
k++;
}
result[k] = '\n';
k++;
}
result[k] = '\0';
return (result);
}


