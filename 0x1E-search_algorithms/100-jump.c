#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for value in  sorted array of ints using jump search
 * @array: pointer to array.
 * @size: size of array.
 * @value: Value to search for.
 * Return: Index of value or -1.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t block = sqrt(size), i;
	size_t start = 0, border = block;

	if (array == NULL)
		return (-1);

	while (array[border] < value && border < size)
	{
		start = border;
		border += block;

		if (border > size - 1)
			return (-1);
	}

	for (i = start; i < border; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (array[i] == value)
			return (i);
			printf("Value found between indexes [%d] and [%d]\n", (int)start, (int)border);
	}

	return (-1);
}
