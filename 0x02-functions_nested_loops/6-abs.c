#include "main.h"
#include <stdlib.h>

/**
 * _abs- Computes absolute value of an int
 * @n: in to be computed
 * Return: 0 always
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);
	else
		return (0);
}
