#include "main.h"

/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 *
 * @n: Number to be checked.
 * Return: 1 if prime, 0 if otherwise.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (prime_checker(n, n - 1));
}

/**
 * prime_checker - Helps to check if number is prime.
 *
 * @n: Number to be checked.
 * @i: Index to be used for divisor checks.
 * Return: 1 if prime, 0 if otherwise.
 */

int prime_checker(int n, int i)
{
	if (i < 2)
		return (1);
	else if ((n % i) == 0)
		return (0);
	else
		return (prime_checker(n, i - 1));
}
