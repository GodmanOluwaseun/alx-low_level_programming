#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints program name.
 *
 * @argc: Number of program arguments
 * @argv: Array of arguments.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
	printf("%s\n", argv[0]);

	return (0);
}
