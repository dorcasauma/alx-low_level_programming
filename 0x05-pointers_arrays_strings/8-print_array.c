#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints n elements of an array of integers, followed by a new line.
 * @a: Pointer to the first element of the array to be printed.
 * @n: Number of elements of the array to be printed.
 */
void print_array(int *a, int n)
{
int i;


for (i = 0; i < n; i++)
{

if (i < n - 1)
{
printf("%d, ", a[i]);
}

else
{
printf("%d\n", a[i]);
}
}
}
