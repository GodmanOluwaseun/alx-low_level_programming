#include "main.h"

/**
 * factorial - Function that returns the factorial of a given number.
 *
 * @n: Int whose factorial is be evaluated.
 * Return: 0
 */

int factorial(int n)
{
	if (n == 0)
	{
	return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	n = n * factorial(n - 1);
	return (n);

}
