#include "main.h"

/**
 * _strncpy- Copies n bytes of a dtring to another
 *
 * @dest: pointer to destination array
 * @src: pointer to source string
 * @n: number of bytes to  be copied
 * Return: value of dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *initialdest = dest;

	while (*src != 0 && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (initialdest);
}
