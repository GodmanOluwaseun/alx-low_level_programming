#include "main.h"

/**
 * void *_calloc - function that allocates memory for an array, using malloc.
 *
 * @nmemb: Number of elements.
 * @size: Size of each element.
 * Return: Pointer, Null if otherwise..
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
