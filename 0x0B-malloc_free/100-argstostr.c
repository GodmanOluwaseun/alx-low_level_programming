#include "main.h"

/**
 * argstostr - Function that concatenates all the arguments of your program.
 *
 * @ac: Argument count.
 * @av: Argument vectors.
 * Return: Pointer to new string, Null if otherwise.
 */

char *argstostr(int ac, char **av)
{
	int i, length = 0, position = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		length += strlen(av[i] + 1);
	}

	str = malloc(length + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		strcpy(str[position], av[i]);
		position += strlen(av[i]);
		str[position++] = '\n';
	}
	str[position] = '\0';

	return (str);
}
