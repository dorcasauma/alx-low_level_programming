#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner) {
    // Allocate memory for the new dog
    dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));

    if (new_dog == NULL) {
        // Memory allocation failed, return NULL
        return NULL;
    }

    // Allocate memory and make a copy of the name
    new_dog->name = (char *)malloc(strlen(name) + 1);
    if (new_dog->name == NULL) {
        // Memory allocation failed, free the previously allocated memory and return NULL
        free(new_dog);
        return NULL;
    }
    strcpy(new_dog->name, name);

    // Allocate memory and make a copy of the owner
    new_dog->owner = (char *)malloc(strlen(owner) + 1);
    if (new_dog->owner == NULL) {
        // Memory allocation failed, free the previously allocated memory and return NULL
        free(new_dog->name);
        free(new_dog);
        return NULL;
    }
    strcpy(new_dog->owner, owner);

    // Set the age of the new dog
    new_dog->age = age;

    return new_dog;
}

// Remember to add a function to free the memory used by the dog_t instances when they are no longer needed.
void free_dog(dog_t *d) {
    if (d == NULL) {
        return;
    }
    free(d->name);
    free(d->owner);
    free(d);
}
