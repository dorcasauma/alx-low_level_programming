#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - this function frees the dynamically allocated memory used
 * by a dog instance,including its name and owner strings.
 * @d: Pointer to the dog instance to be freed.
 */
void free_dog(dog_t *d)
{
if (d == NULL)
{
return;
}
free(d->name);
free(d->owner);
free(d);
}
