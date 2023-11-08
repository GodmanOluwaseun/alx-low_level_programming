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
	int a, b, len;
	char *s3;

	if (s1 == NULL)
	{
		return ("");
	}
	if (s2 == NULL)
	{
		return ("");
	}

	a = strlen(s1);
	b = strlen(s2);
	len = a + b;

	s3 = malloc(sizeof(char) * (len + 1));

	if (s3 == NULL)
	{
		return (NULL);
	}

	s3 = strcpy(s3, s1);
	s3 = strcat(s3, s2);

	return (s3);
}
