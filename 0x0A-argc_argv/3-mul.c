#include "main.h"

/**
 * main - Program that multiplies two numbers.
 *
 * @argc: Arguments count
 * @argv: Arguments vector.
 * Return: (0).
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);

	return (0);
}
