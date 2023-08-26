#include "main.h"

/**
 * reverse_array- Reverses the content of an array of integers
 *
 * @a: pointer to string
 * @n: number of elements in the string.
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int start = 0;
	int last = n - 1;
	int temp;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[last];
		a[last] = temp;

		start++;
		last--;
	}
}
