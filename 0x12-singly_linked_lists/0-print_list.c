#include "lists.h"

/**
 * print_list - Function that prints elements of a list.
 * @h: Head node.
 * Return: (0)
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = NULL;

	if (h == NULL)
	{
		return (0);
	}

	ptr = h;

	while (ptr != NULL)
	{
		count++;
		if (ptr->str == NULL)
		{
		printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", ptr->len, ptr->str);
		}

		ptr = ptr->next;
	}
	return (count);
}
