#include "lists.h"

/**
 * listint_len - Function that returns the number of elements in
 * a linked listint_t list.
 * @h: Pointer to first node.
 * Return: No of nodes.
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}

	ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
