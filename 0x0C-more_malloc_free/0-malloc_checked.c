#include "main.h"

/**
 * malloc_checked - Function that allocates memory using malloc.
 *
 * @b: Size of array.
 * Return: Pointer to array.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		fprintf(stderr, "Memory allocation failed\n");
		exit(98);
	}
	return (ptr);
}
