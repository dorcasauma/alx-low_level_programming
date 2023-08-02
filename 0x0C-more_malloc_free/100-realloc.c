#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory previously allocated with malloc.
 * @old_size: Size, in bytes, of the allocated space for ptr.
 * @new_size: New size, in bytes, of the new memory block.
 *
 * Return: A pointer to the newly reallocated memory block.
 *         If new_size is equal to zero and ptr is not NULL, the function returns NULL.
 *         If malloc fails, the function returns NULL.
 *         If ptr is NULL, the call is equivalent to malloc(new_size).
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
return new_ptr;
}
if (new_size == old_size)
return ptr;
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
memcpy(new_ptr, ptr, (old_size < new_size) ? old_size : new_size);
free(ptr);
return new_ptr;
}
