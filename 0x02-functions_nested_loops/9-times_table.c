#include <stdio.h>

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Return: void
 */
void times_table(void)
{
int row, col, result;

for (row = 0; row <= 9; row++)
{
for (col = 0; col <= 9; col++)
{
result = row * col;
if (col == 0)
{
printf("%d", result);
}
else if (result <= 9)
{
printf(",  %d", result);
}
else
{
printf(", %d", result);
}
}
printf("\n");
}
}
