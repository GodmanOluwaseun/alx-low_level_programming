#include "variadic_functions.h"

/**
 * print_all - Function that prints anything.
 * @format: Format specifier
 * @...: Variable number of arguments.
 * Return: void.
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0, j = 0;
	char *str;
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				while (str[j] != '\0')
				{
				printf("%c", str[j]);
				j++;
				}
				break;
			default:
				break;
		}
		if (COMMA_PRINT_CHECK)
		printf(",");
		i++;
	}
	printf("\n");
	va_end(args);
}
