#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns the nth node of a
 * listint_t linked list.
 * @head: Pointer to first node.
 * @index: The index of element to look for.
 * Return: Pointer to nth element, or NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int count_index = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	ptr = head;

	if (index == 0)
	{
		return (ptr);
	}

	while (ptr != NULL)
	{
		if (count_index == index)
		{
			return (ptr);
		}
		ptr = ptr->next;
		count_index++;
	}
	return (NULL);
}
