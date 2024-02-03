#include "lists.h"

/**
 * list_len - Function that returns the number of
 * elements in a linked list_t list..
 * @h: Head node.
 * Return: (0)
 */

size_t list_len(const list_t *h)
{
	size_t no_elements = 0;
	const list_t *ptr = NULL;

	if (h == NULL)
	{
		return (0);
	}

	ptr = h;

	while (ptr != NULL)
	{
		no_elements++;
		ptr = ptr->next;
	}

	return (no_elements);
}
