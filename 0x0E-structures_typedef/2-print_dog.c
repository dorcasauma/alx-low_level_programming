#include <stdio.h>
#include "dog.h"
/**
 *print_dog - This function takes a pointer to a `struct dog` and prints
 *its contents, including the name,
 *age, and owner information. If any element of the `struct dog` is NULL,
 *it will print "(nil)" instead of the NULL value.
 * @d: Pointer to the `struct dog` variable to be printed.
 * @note If `d` is NULL, the function will print nothing.
 */


void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
