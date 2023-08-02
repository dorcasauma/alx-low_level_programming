#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: Size of the memory to allocate.
 *
 * Return: A pointer to the allocated memory.
 *         If malloc fails, the function terminates the process with status 98.
 */
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
{
fprintf(stderr, "Memory allocation failed.\n");
exit(98);
}
return ptr;
}
