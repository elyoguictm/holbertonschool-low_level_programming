#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Gird
 * @grid: Array
 * @height: height.
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int z;

	for (z = 0; z < height; z++)
	{
		free(grid[z]);
	}
	free(grid);
}
