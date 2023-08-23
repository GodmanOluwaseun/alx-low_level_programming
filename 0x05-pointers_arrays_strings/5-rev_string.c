#include "main.h"
#include <string.h>

/**
 * rev_string- Function that reverses a string
 *
 * @s: string to be reversed
 * return (void).
 */

void rev_string(char *s)
{
	int a, b, len;
	char temp;

	len = strlen(s);

	for (a = 0, b = len - 1; a < b; a++, b--)
	{
		temp = s[a];
		s[a] = s[b];
		s[b] = temp;
	}
}
