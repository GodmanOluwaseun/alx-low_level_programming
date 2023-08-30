#include "main.h"
#include <stddef.h>

/**
 * _memset - Function fills the first n bytes of the memory area pointed
 * to by s with the constant byte b.
 *
 * @s: Pointer to mem location.
 * @b: byte to  fe filled in.
 * @n: numbe of bytes to fill.
 * Return: pointer to modified bytes.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);

}
