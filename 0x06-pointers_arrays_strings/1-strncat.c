#include "main.h"

/**
 * _strncat- concatenates 2 stringd together using at most n bytes from source
 *
 * @dest: destination of copied string
 * @src: source of copied string
 * @n: number of bytes of string to be copied
 * Return: value of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *initialdest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';

	return (initialdest);
}
