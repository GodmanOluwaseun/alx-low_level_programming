#include "main.h"

/**
 * main - Prints minimum number of coins to make change for an amount of money.
 *
 * @argc: No of arguments.
 * @argv: Arguments vector.
 * Return: (0).
 */

int main(int argc, char *argv[])
{
	int coin, cents;

	if (argc != 2)
		printf("Error\n");
		return (1);

	cents = atoi(argv[1]);

	if (cents < 0)
		printf("0\n");

	else
	{
		coin = 0;

		while (cent > 0)
		{
			if (cents >= 25)
				cents -= 25;
			else if (cents >= 10)
				cents -= 10;
			else if (cents >= 5)
				cents -= 5;
			else if (cents >= 2)
				cents -= 2;
			else
				cents -= 1;
		coin++;
		}
	printf("%d\n", coin);
	}
	return (0);
}
