#include "main.h"

/**
 * _sqrt_recursion - Function that returns the natural square root of a number.
 *
 * @n: Number to find it's square root.
 * Return: Squareroot of n, -1 if otherwise.
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_checker(n, 1));
	}
}

/**
 * _sqrt_checker - Checks and calculate squareroot recurcively.
 *
 * @n: Number whoose squareroot is to be checked.
 * @i: Counter to check the squareroot.
 * Return: Squareroot of n, -1 if otherwise.
 */

int _sqrt_checker(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_checker(n, i + 1));
	}
}
