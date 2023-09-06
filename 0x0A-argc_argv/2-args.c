#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints all arguments it receives.
 *
 * @argc: Count of arguments
 * @argv: Pointer to string containing arguments.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
