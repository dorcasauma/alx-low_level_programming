
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *init_dog - This function takes a pointer to a struct dog,
 *along with the dog's name, age, and owner
 *information, and initializes the dog structure with the given values.
 *
 *@d: Pointer to the struct dog variable to be initialized.
 *@name: Pointer to the character array containing the name of the dog.
 *@age: The age of the dog.
 *@owner: Pointer to the character array containing the name
 * of the dog's owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = strdup(name);
d->age = age;
d->owner = strdup(owner);
}
