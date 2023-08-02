#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of nmemb elements of size bytes each.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: A pointer to the allocated memory.
 *         If nmemb or size is 0, the function returns NULL.
 *         If malloc fails, the function returns NULL.
 *         The memory is initialized to zero.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr = NULL;
unsigned int total_size;
unsigned int i;
unsigned char *char_ptr = ptr;

if (nmemb == 0 || size == 0)
return (NULL);
total_size = nmemb * size;
ptr = malloc(total_size);
if (ptr == NULL)
return (NULL);
for ( i = 0; i < total_size; i++)
char_ptr[i] = 0;
return (ptr);
}
