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
	if (name && f)
	f(name);
}
