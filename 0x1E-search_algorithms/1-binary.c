#include "search_algos.h"

/**
 * binary_search - Searches for value in sorted array of ints  using Binary search
 * @array: Pointer to array.
 * @size: Size of array.
 * @value: Value to search for.
 * Return: value match or -1.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t end = size - 1;
	size_t middle, i;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		printf("Searching in array: ");

		for (i = start; i <= end; i++)
		{
			printf("%d", array[i]);
			if (i < end)
				printf(", ");
		}
		printf("\n");

		middle = (start + end) / 2;

		if (array[middle] == value)
		{
			return ((int)middle);
		}
		else if (value > array[middle])
		{
			start = middle + 1;
		}
		else
		{
			end = middle - 1;
		}
	}

	return (-1);
}
