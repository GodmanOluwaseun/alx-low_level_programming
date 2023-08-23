#include "main.h"

/**
 * _strlen- Function that returns length of string
 *
 * @s: string to be checked
 * Return: (0)
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
	len++;
	return (len);
}
