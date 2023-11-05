#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints minimum number of coins to make change for an amount of money.
 *
 * @argc: No of arguments.
 * @argv: String of arguments.
 * Return: 0 on success, 1 on error.
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
		printf("Error\n");
		return (1);
	if (argv[1] < 0)
		printf("0\n");

	int cent = atoi(argv[1]);

	else
	{

	int coin = 0;

	while (cent > 0)
	{
		if (cent >= 25)
			cent -= 25;
		else if (cent >= 10)
			cent -= 10;
		else if (cent >= 5)
			cent -= 5;
		else if (cent >= 2)
			cent -= 2;
		else
			cent -= 1;
	coin++;
	}
	printf("%d\n", coin);
	}
	return (0);
}
