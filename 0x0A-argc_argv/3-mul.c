#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that multiplies two numbers.
 *
 * @argc: Number of arguments.
 * @argv: Pointer to string containing arguments.
 * Return: (0);
 */

int main(int argc, char *argv[])
{
	int mul, a, b;

	if argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[2]);
	b = atoi(argv[3]);
	mul  = a * b;

	printf("%d\n", mul);

	return (0);
}
