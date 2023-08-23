#include "main.h"

/**
 * print_rev- Function that prints string in reverse
 *
 * @s: string to be printed
 * Return: void.
 */

void print_rev(char *s)
{
	int len = 0;
	{
	while (s[len])
	len++;
	while (len--)
	putchar (s[len]);
	}
	putchar ('\n');
}
