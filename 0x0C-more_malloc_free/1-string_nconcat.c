#include "main.h"

/**
 * string_nconcat - Function that concatenates two strings.
 *
 * @s1: Pointer to string to copy 1.
 * @s2: Pointer to string to copy 2.
 * @n: No of bytes of s2 to copy.
 * Return: pointer to new string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length, i, j, a, position;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = strlen(s1);
	j = strlen(s2);

	if (n >= j)
	{
		n = j;
	}

	length = (i + n) + 1;
	s3 = malloc(length);

	if (s3 == NULL)
	{
		return (NULL);
	}

	position = 0;
	for (a = 0; a < i; a++)
	{
		s3[a] = s1[a];
		position += a;
	}

	for (a = 0; a < n; a++)
	{
		s3[position] = s2[a];
		position++;
	}
	s3[position] = '\0';

	return (s3);
}
