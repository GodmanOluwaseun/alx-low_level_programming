#include "lists.h"

/**
 * sum_listint - Function that sums all data(n) in a node listint_t.
 * @head: Pointer to first node.
 * Return: Sum, or 0.
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	ptr = head;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
