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
	size_t s = 0, b = block;

	if (array == NULL || size == 0)
		return (-1);

	while (b < size && array[b] < value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)s, array[s]);
		printf("Value checked array[%d] = [%d]\n", (int)b, array[b]);
		s = b;
		b += block;
		if (b >= size)
			b = size;
	}

	printf("Value found between indexes [%d] and [%d]\n", (int)s, (int)b);

	for (i = s; i <= b; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
