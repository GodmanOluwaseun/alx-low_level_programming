#include "main.h"

/**
 * print_array- Function that prints n elements of an array of integers,
 * followed by new line.
 *
 * @a: array to be printed
 * @n: no of elements to print
 * return: 0
 */

void print_array(int *a, int n)
{
	int b = 0;

	for (b = 0; b < n; b++)
	{
		if (b == 0)
		{
			printf("%d", a[b]);
		}
		else
		{
			printf(", %d", a[b]);
		}
	}
	printf("\n")
}
