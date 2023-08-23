#include "main.h"

/**
 * _puts- Function that prints a string, followed by new line, to stdout.
 *
 * @str: Pointer to string
 * Return: (string).
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a])
	_putchar (str[a]);
	a++;
	_putchar ('\n');

}
