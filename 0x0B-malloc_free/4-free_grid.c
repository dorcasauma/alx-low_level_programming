#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional grid previously created by alloc_grid function.
 * @grid: The 2-dimensional array to be freed.
 * @height: The height of the grid (number of rows).
 */
void free_grid(int **grid, int height)
{
int i;
i = 0;
if (grid == NULL || height <= 0)
return;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
