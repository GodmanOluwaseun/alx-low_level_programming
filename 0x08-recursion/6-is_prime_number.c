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
		return (0);
	return prime_checker(n, n - 1);
}

/**
 * prime_checker - Function that checks for prime number
 *
 * @n: number to be checked.
 * @i: number used to check for possible divisors.
 * Return: 1 ifn is prime, 0 if otherwise.
 */

int prime_checker(int n, int i)
{
	if (i < 2)
		return (1);
	if (n % i == 0)
		return (0);
	return prime_checker(n, i - 1);
}
