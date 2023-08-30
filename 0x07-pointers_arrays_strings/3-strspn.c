#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring.
 *
 * @s: String to compare
 * @accept: String to compare against.
 * Return: value of a(counting int).
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b;

	for (a = 0; *(s + a); a++)
	{
		for (b = 0; *(accept + b); b++)
		{
			if (*(s + a) == *(accept + b))
			{
				break;
			}
		}
	if (*(accept + b) == '\0')
	{
		break;
	}

	}
	return (a);
}
