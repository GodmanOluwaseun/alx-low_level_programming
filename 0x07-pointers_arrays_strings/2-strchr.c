#include "main.h"

/**
 * _strchr- Function that locates a character in a string.
 *
 * @s: Pointer to string.
 * @c: Character to evaluate for.
 * Return: pointer to occurence of c in array.
 */

char *_strchr(char *s, char c)
{
	int a = 0;

	while (s[a] != '\0')
	{
		if (s[a] == c)
		{
			return (s + a);
		}
		a++;
	}

	return ('\0');
}
