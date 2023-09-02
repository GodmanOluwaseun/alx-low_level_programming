#include "main.h"
#include "math.h"

/**
 * _sqrt_recursion - Function that returns the natural square root of a number.
 *
 * @n: Number to find it's square root.
 * Return: 0.
 */

int _sqrt_recursion(int n)
{
	double result = 0;

	if (n == 0)
		return (0);

	result = (n / _sqrt_recursion(n - 1));
	return (result);

	else (result is <= 0)
                return (-1);
}
