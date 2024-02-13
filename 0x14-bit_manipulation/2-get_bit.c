#include "main.h"

/**
 * get_bit - Function that returns the value of a bit at a given index.
 * @n: Number to check it's bit.
 * @index: Bit index.
 * Return: Bit at index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;
	unsigned int num_bits = sizeof(unsigned long int) * 8;

	if (index >= num_bits)
	{
		return (-1);
	}

	if (n & mask)
	{
		return (1);
	}

	else
		return (0);
}
