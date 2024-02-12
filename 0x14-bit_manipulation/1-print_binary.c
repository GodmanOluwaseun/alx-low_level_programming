#include "main.h"

/**
 * print_binary - Function that prints the binary representation of a number.
 * @n: Number to print it's binary.
 * Return: Void.
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int i, j = sizeof(unsigned long int) * 8, first_1 = 0;

	for (i = 0; i < j; i++)
	{
		if (n & mask)
		{
			putchar('1');
			first_1 = 1;
		}

		else if (first_1)
		{
			putchar('0');
		}
		mask >>= 1;
	}

	if (!first_1)
		putchar('0');
}
