#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Creates an array of chars and initializes 
 * it with a specific char.
 * @size: The size of the array to be created.
 * @c: The char with which to initialize the array.
 *
 * Return: A pointer to the created array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array = (char *)malloc(size * sizeof(char));
if (size == 0)
return (NULL);
if (array == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
