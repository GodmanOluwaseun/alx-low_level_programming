#include "main.h"

/**
 * puts2- Functions that prints every other character of string, starting
 * from first character, followed by a new line.
 *
 * @str: String to be printed
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
	{
		putchar (str[i]);
	}
		i++;
	}
	putchar ('\n');
}
