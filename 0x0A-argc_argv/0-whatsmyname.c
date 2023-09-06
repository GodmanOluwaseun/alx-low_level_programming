#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints its name, followed by a new line.
 *
 * @argc: Count of total arguments
 * @argv: Pointer to array of string containing arguments.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
	printf("%s\n", argv[0]);

	return (0);
}
