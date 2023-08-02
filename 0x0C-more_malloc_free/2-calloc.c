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
void *ptr;
unsigned int total_size;
unsigned char *char_ptr;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
total_size = nmemb * size;
ptr = malloc(total_size);
if (ptr == NULL)
return (NULL);
char_ptr = ptr;
for (i = 0; i < total_size; i++)
char_ptr[i] = 0;
return (ptr);
}
