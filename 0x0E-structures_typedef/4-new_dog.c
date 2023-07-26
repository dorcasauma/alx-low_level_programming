#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 *
 *  new_dog - This function allocates memory
 * for a new dog and its strings (name and owner).
 * It then makes a copy of the provided name and
 * owner in the allocated memory.
 *
 * @name: The name of the new dog.
 * @age: The age of the new dog.
 * @owner: The owner's name of the new dog.
 *
 * Return -  A pointer to the newly created dog (dog_t).
 *         Returns NULL if memory allocation fails.
 * free_dog - This function frees the dynamically allocated memory 
 * used by a dog instance,including its name and owner strings.
 *
 * @d: Pointer to the dog instance to be freed.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));
if (new_dog == NULL)
{
return (NULL);
}
new_dog->name = (char *)malloc(strlen(name) + 1);
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
strcpy(new_dog->name, name);
new_dog->owner = (char *)malloc(strlen(owner) + 1);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}
strcpy(new_dog->owner, owner);
new_dog->age = age;
return (new_dog);
}
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
