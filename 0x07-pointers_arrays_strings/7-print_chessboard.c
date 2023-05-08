#include <stdio.h>
/**
 * print_chessboard - Prints a chessboard represented
 * by a 2D array of characters.
 *
 * @a - A pointer to an 8x8 2D array of characters
 * representing the chessboard.
 */
void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
printf("%c ", a[i][j]);
}
printf("\n");
}
}
