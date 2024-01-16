#include "main.h"

/**
 * alloc_grid - Function that returns a pointer to a 2 dimensional
 * array of integers.
 *
 * @width: Width of array.
 * @height: Height of array.
 * Return: Pointer to 2d array.
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);

			if (arr[i] == NULL)
			{
				for (j = 0; j < i; j++)
				{
					free(arr[j]);
				}
			free(arr);
			return (NULL);
			}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
