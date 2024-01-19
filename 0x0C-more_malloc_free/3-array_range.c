#include "main.h"

/**
 * array_range - Function that creates an array of integers.
 *
 * @min: Min integer to fill initialize first array element.
 * @max: Max integer to fill initialize last array element.
 * Return: Pointer to new array.
 */

int *array_range(int min, int max)
{
	int i, length;
	int *arr;

	if (min > max)
		return (NULL);

	length = (max - min) + 1;
	arr = malloc(sizeof(*arr) * length);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
