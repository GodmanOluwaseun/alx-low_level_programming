#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - Function that executes a function given as a
 * parameter on each element of an array.
 *
 * @array: Pointer to array.
 * @size: array size.
 * @action: Function pointer.
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	
	if (array && action)
		for (i = 0; i < size; i++)
		action(array[i]);
}
