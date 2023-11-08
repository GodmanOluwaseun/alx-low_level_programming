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
	int a, b, len, i = 0, j = 0;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = strlen(s1);
	b = strlen(s2);
	len = a + b;

	s3 = malloc(sizeof(char) * (len + 1));

	if (s3 == NULL)
		return (NULL);

	while (i < a)
	{
	s3[i] = s1[i];
	i++;
	}

	while (j < b)
	{
	s3[i] = s2[j];
	i++;
	j++;
	}

	s3[i] = '\0';

	return (s3);
}
