#include "main.h"

/**
 * times_table- function that prints the 9 times table, starting with 0.
 *
 * Return: void
 */

void times_table(void)

{
	int a, b, c;

	for (b = 0; b < 10; b++)
	{
	for (a = 0; a < 10; a++)
	{
	c = a * b;
	if (c == 0)
	{
	_putchar (c + 48);
	}
	if (c < 10 && a != 0)
	{
	_putchar (',');
	_putchar (' ');
	_putchar (' ');
	_putchar (c + '0');
	}
	else if (c >= 10)
	{
	_putchar (',');
	_putchar (' ');
	_putchar ((c / 10) + '0');
	_putchar ((c % 10) + '0');
	}
	}
	_putchar ('\n');
	}
}
