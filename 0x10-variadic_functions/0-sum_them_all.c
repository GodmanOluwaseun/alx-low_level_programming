#include "variadic_functions.h"

/**
 * sum_them_all - Function that returns the sum of all its parameters.
 *
 * @n: Known argument.
 * @...: unkown parameters.
 * Return: (0)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int total = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	total += va_arg(args, int);
	}

	va_end(args);
	return (total);
}
