#include "main.h"

/**
 * create_array - Fnction that creates an array of chars, and
 * initializes it with a specific char.
 *
 * @size: Size of array
 * @c: Characters
 * Return: Pointer to array, Null if failed.
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	str = malloc(sizeof(char) * size);

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
