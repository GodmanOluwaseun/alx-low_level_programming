#include "main.h"

/**
 * flip_bits - Function that returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: First number
 * @m: second nummber.
 * Return: New number.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped, mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	unsigned long int count = 0, i = 0;

	flipped = n ^ m;

	for (; i < sizeof(unsigned long int) * 8; i++)
	{
		if (flipped & mask)
		{
			count++;
		}
		mask >>= 1;
	}

	return (count);
}
