#include <stdio.h>

/**
 * array_iterator - This function takes an integer array, its size, and a
 * function pointer as
 * arguments. It then executes the provided function
 * on each element of the array.
 * print_element - Prints an integer element to the standard output.
 * @param element The integer element to be printed
 *
 * @param array Pointer to the integer array.
 * @param size The size of the array.
 * @param action A function pointer to a function that takes an integer as
 *               an argument and returns void.
 */

void print_element(int element)
{
printf("%d ", element);
}
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
