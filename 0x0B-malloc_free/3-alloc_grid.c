#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: A pointer to the allocated 2-dimensional array,
 *         or NULL if memory allocation fails or width/height is 0/negative.
 */
int **alloc_grid(int width, int height)
{
int i;
int j;
int **grid = (int **)malloc(height * sizeof(int *));
i = 0;
j = 0;
grid[i] = (int *)malloc(width * sizeof(int));
if (width <= 0 || height <= 0)
return (NULL);
if (grid == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
if (grid[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(grid[j]);
}
free(grid);
return (NULL);
}
for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}
return (grid);
}
