#include "main.h"

/**
 * int print_last_digit- Prints the last digit of a number.
 * @a: int to be targeted
 *
 * Return: always (0).
 */

int print_last_digit(int a)
{
	int last_digit = a % 10;

	if (a < 0)
		last_digit = last_digit * -1;
	_putchar(last_digit + 0);
	return (last_digit);
}
