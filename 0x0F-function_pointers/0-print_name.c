#include "function_pointers.h"

/**
 * print_name - Function that prints a name.
 *
 * @name: Pointer to string containing name.
 * @f: Function pointer.
 * Return: void.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

/**
 * print - Print string content.
 *
 * @s: Pointer to string
 * Return: void.
 */

void print(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
	_putchar(s[i]);
	i++;
	}
	_putchar('\n');
}
