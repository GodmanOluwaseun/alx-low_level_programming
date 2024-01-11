#include "main.h"

/**
 * _pow_recursion - Function that returns the value of x raised to
 * the power of y.
 *
 * @x: Int to use as base..
 * @y: Int to use as exponential.
 * Return: Exponential, -1 if y is -ve.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
