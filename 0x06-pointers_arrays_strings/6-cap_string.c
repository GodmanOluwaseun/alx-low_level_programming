#include "main.h"

/**
 * *cap_string- Function that capitalizes all words of a string.
 *
 * @s: string to convert.
 * Return: modified string.
 */

char *cap_string(char *s)
{
	int i, j;
	char sep[] = " \t\n,;.!?\"(){}"; /* Separators String */

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
	{
		if (i == 0)
		{
			s[i] -= 32;
		}
		else
		{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (sep[j] == s[i - 1])
			{
				s[i] -= 32;
			}
		}
		}
	}
		i++;
	}
	return (s);
}
