#include "main.h"

/**
 * print_binary - Function that prints the binary representation of a number.
 * @n: Number to print it's binary.
 * Return: Void.
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	for (; mask > 0; mask >>= 1)
	{
		if (n & mask)
		{
			putchar('1');
		}

		else
			putchar('0');
	}
}
