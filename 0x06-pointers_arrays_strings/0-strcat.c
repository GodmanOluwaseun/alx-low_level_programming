#include "main.h"

/**
 * _strcat- Concatenates 2 strings together.
 *
 * @dest: pointer to destination array
 * @src: pointer to source
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	char *initialdest = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (initialdest);
}
