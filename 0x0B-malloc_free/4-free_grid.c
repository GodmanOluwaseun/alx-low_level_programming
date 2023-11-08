#include "main.h"

/**
 * free_grid - Function that frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 *
 * @grid: Pointer to 2D array.
 * @height: Column of array.
 * Return: Void.
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
