#include "main.h"
#include <string.h>

/**
 * _strstr - "Function that locates a substring."
 *
 * @haystack: String to check.
 * @needle: Substring to check for.
 * Return: Pointer to beginning of substring, NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	size_t needle_len = strlen(needle);

	while (*haystack)
	{
		if (strncmp(needle, haystack, needle_len) == 0)
		{
			return (haystack);
		}
		haystack++;
	}

	return ('\0');
}
