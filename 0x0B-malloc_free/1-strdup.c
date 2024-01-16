#include "main.h"

/**
 * _strdup - Function that returns a pointer to a newly allocated space in
 * memory,which contains a copy of the string given as a parameter.
 *
 * @str: Pointer to string.
 * Return: Pointer to duplicated string, NULL if otherwise.
 */

char *_strdup(char *str)
{
	int i = 0;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	s = malloc(sizeof(char) * (i + 1));

	if (s == NULL)
	{
		return (NULL);
	}
	strcpy(s, str);
	return (s);
}
