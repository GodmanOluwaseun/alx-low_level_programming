#include "search_algos.h"

/**
 * linear_search - Searches for value in array of integers using linear search
 * @array: array to search.
 * @size: size of array.
 * @value: value to search for.
 * Return: value or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Found %d at index: %zu\n", array[i], i);
			return (i);
		}
		else
			printf("Value checked array[%zu] = [%d]\n", i, array[i]);
	}

	return (-1);
}
