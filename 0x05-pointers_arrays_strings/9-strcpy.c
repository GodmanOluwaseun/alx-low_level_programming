#include "main.h"

/**
 * *_strcpy- Copies pointed string, including the terminating null byte (\0),
 *
 * @src: pointer to string to be copied
 * @dest: pointer to copy destination.
 * Return: *dest
 */

char *_strcpy(char *dest, char *src);
{
	int a = 0;

	do {
		a++;
		dest[a] = src[a];
	}	while (src[a] != '\0');
	return (dest);
}
