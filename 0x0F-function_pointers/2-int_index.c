#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer.
 *
 * @array: Pointer to array.
 * @size: No of array elements.
 * @cmp: Function pointer to compare.
 * Return: Index of first matching int, returns -1 if otherwise.
 */

int int_index(int *array, int size, int (*cmp)(int));
{
	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (int i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
