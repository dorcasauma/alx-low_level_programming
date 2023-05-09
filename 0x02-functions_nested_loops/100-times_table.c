#include <stdio.h>
/**
 * print_times_table - Prints the n times table starting from 0.
 * @n: The size of the times table to print.
 *
 * Description: This function prints the multiplication
 * table for integers 0 to n.
 * If n is greater than 15 or less than 0, nothing is printed.
 * The output is formatted with a width of 3 characters for each
 * number and a space between columns.
 * Rows are separated by newlines (\n).
 */
void print_times_table(int n)
{
int i, j;

if (n < 0 || n > 15)
return;

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
int result = i * j;
printf("%3d", result);

if (j != n)
printf(" ");
}

printf("\n");
}
}
