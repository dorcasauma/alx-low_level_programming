#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two
 * diagonals of a square matrix of integers.
 *
 * @a: a pointer to the first element of the square matrix
 * @size:the size of one side of the square matrix
 */
void print_diagsums(int *a, int size)
{
int i, sum1 = 0, sum2 = 0;
for (i = 0; i < size; i++)
{
sum1 += *(a + i * size + i);
sum2 += *(a + i * size + (size - 1 - i));
}
printf("Diagonal sum 1: %d\n", sum1);
printf("Diagonal sum 2: %d\n", sum2);
}
