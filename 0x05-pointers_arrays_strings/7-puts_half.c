#include "main.h"

/**
 * puts_half- Function that prints half of a string, followed by a new line.
 *
 * @str: string to be printed
 * return: void
 */

void puts_half(char *str)
{
	int a, b;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}

	b = a / 2;

	if (b % 2 == 1)
	{
		b++;
	}

	while (b != '\0')
	{
		putchar (str[b]);
		b++;
	}
	putchar ('\n');
}
