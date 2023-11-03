#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints all arguments it receives.
 *
 * @argc: Count of arguments.
 * @argv: Pointer to an array of strings containing arguments.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for  (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
