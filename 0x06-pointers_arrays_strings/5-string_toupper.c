#include "main.h"

/**
 * *string_toupper- Changes all lowercase letters of a string to uppercase.
 *
 * @str: pointer to string
 * Return: (string)
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*str != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
	{
		*ptr = *ptr - 'a' + 'A';
	}
	ptr++;
}
	return (str);
}
