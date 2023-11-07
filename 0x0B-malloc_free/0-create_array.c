#include "main.h"

/**
 * create_array - Function that creates an array of chars, and
 * initializes it with a specific char.
 *
 * @size: Size of array
 * @c: Character to put in array.
 * Return: Pointer to array, NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(sizeof(char) * size);

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
