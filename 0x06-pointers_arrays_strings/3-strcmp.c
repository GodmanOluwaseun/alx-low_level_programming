#include "main.h"

/**
 * _strcmp- Function that compares two strings.
 *
 * @s1: string to be compared
 * @s2: second string to be compared to another
 * Return: zero if s1 = s2, a -ve no if lesser, or a +ve no if greater.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
	if (*s1 != *s2)
	{
		return (*s1 - *s2);
	}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
