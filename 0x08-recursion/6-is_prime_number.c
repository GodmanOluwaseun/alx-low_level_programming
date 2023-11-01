#include "main.h"

/**
 * is_prime_number - unction that returns 1 if the input integer is
 * a prime number, otherwise return 0.
 *
 * @n: Number to be checked.
 * Return: 1 ifn is prime, 0 if otherwise.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
