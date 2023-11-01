#include "main.h"

/**
 * _sqrt_recursion - Function that returns the natural square
 * root of a number.
 *
 * @n: Number whoose square is to be checked.
 * Return: Squareroot of n, -1 if otherwise.
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	else if (n < 0)
		return (-1);
	return (_sqrt_checker(n, 1));
}

/**
 * _sqrt_checker - Function that calculates square root.
 *
 * @n: Number whoose square is to be checked.
 * @i: Increment to check for square number.
 * Return: Squareroot of n, -1 if otherwise.
 */

int _sqrt_checker(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (_sqrt_checker(n, i + 1));
}
