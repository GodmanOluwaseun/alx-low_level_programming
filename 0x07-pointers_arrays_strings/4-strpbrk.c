#include "main.h"

/**
 * _strpbrk - Function that searches a string for any of a set of bytes.
 *
 * @s: String to be checked.
 * @accept: String containing bytes to be checked for.
 * Return: Pointer to first matching byte, NULL if none is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; *(s + a); a++)
	{
		for (b = 0; *(accept + b); b++)
		{
			if (*(s + a) == *(accept + b))
			{
				return (s + a);
			}

		}

	}

	return ('\0');
}
