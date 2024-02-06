#include "lists.h"

/**
 * free_listint - Function that frees a listint_t list.
 * @head: Pointer to first node.
 * Return: void.
 */

void free_listint(listint_t *head)
{
	listint_t *ptr, *next_node;

	if (head == NULL)
	{
		return;
	}

	ptr = head;

	while (ptr != NULL)
	{
		next_node = ptr->next;
		free(ptr);
		ptr = next_node;
	}
}
