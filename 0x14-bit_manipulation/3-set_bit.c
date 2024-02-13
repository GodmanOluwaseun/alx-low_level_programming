#include "main.h"

/**
 * set_bit - Function that sets the value of a bit to 1 at a given index.
 * @n: Pointer to number.
 * @index: Bit index.
 * Return: 1, -1 if failed.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;
	unsigned int num_bits = sizeof(unsigned long int) * 8;

	if (index >= num_bits)
	{
		return (-1);
	}

	if ((*n & mask) == 0)
	{
		*n |= mask;
		return (1);
	}

	return (1);
}
