#include "main.h"

/**
 * binary_to_uint - Function that converts a binary number to an unsigned int.
 * @b: Pointer to binary string.
 * Return: Decimal value or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_value = 0, weight, place_value;

	if (*b == '\0')
	{
		return (0);
	}

	place_value = strlen(b) - 1;

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		weight = 1 << place_value;
		dec_value += (*b - '0') * weight;
		place_value--;
		b++;
	}

	return (dec_value);
}
