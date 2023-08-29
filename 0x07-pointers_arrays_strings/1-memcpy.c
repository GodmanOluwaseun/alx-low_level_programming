#include "main.h"

/**
 * _memcpy- Function that copies memory area.
 *
 * @dest: Pointer to destination location.
 * @src: Pointer to source location.
 * @n: Number of bytes to be copied.
 * Return: pointer to modified string'
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}

	return (dest);
}
