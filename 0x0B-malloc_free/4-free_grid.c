#include "main.h"

/**
 * free_grid - Function that frees a 2 dimensional grid previously created
 *
 * @grid: Pointer to array.
 * @height: Height of array.
 * Return: void.
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
	free(grid);)
}
