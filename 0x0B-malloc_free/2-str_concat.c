#include "main.h"

/**
 * str_concat - Function that concatenates two strings.
 *
 * @s1: Pointer to string
 * @s2: pointer to string 2
 * Return: Pointer to new string, NULL if otherwise.
 */

char *str_concat(char *s1, char *s2)
{
	int i, a, b;
	char *s3;

	if (s1 == NULL)
	{
		return ("");
	}
	if (s2 == NULL)
	{
		return ("");
	}

	while (s1[a] != '\0')
	{
		a++;
	}
	while (s2[b] != '\0')
	{
		b++;
	}

	i = a + b;

	s3 = malloc(sizeof(char) * (i + 1));

	if (s3 == NULL)
	{
		return (NULL);
	}

	s3 = strcpy(s3, s1);
	s3 = strcat(s3, s2);

	return (s3);
}
