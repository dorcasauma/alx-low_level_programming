#include <stdio.h>

/**
 * @brief Executes the provided function on each element of an integer array.
 *
 * This function takes an integer array, its size, and a function pointer as
 * arguments. It then executes the provided function on each element of the array.
 *
 * @param array Pointer to the integer array.
 * @param size The size of the array.
 * @param action A function pointer to a function that takes an integer as
 *               an argument and returns void.
 */
void array_iterator(int *array, size_t size, void (*action)(int));

void print_element(int element)
{
printf("%d ", element);
}
void array_iterator(int *array, size_t size, void (*action)(int))
{
for (size_t i = 0; i < size; i++)
{
action(array[i]);
}
}
