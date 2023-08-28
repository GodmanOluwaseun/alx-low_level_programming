#include "main.h"

/**
 * *leet- Encodes a string into 1337
 *
 * @s: string to be encoded
 * Return: pointer to encoded string.
 */

char *leet(char *s)
{
	int a = 0;
	int b;
	char leet[] = "aeotlAEOTL";
	char leetnum[] = "4307143017";

	while (s[a] != '\0')
	{
		b = 0;
		while (leet[b] != '\0')
		{
			if (s[a] == leet[b])
			{
				s[a] = leetnum[b];
				break;
			}
			b++;
		}
		a++;
	}
	return (s);
}
