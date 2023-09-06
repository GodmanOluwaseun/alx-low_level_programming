#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints the number of arguments passed into it.
 *
 * @argc: Count of arguments.
 * @argv: Pointer to an array of strings containing arguments.
 * Return: 0.
 */

int main(int argc, char *argv[] __attribute__((__unused__)))
{
	printf("%d\n", argc - 1);

	return (0);
}
