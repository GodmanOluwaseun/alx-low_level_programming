#include "variadic_functions.h"

/**
 * print_numbers - Function that prints numbers, followed by a new line.
 *
 * @separator: Pointer to delimiter character.
 * @n: Number of passed integers.
 * @...: VAriable no of arguments.
 * Return: Void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (separator == NULL)
	{
		return;
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);
}
