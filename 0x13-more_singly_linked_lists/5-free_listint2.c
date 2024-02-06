#include "lists.h"

/**
 * free_listint2 - Function that frees a listint_t list.
 * @head: Pointer to first node.
 * Return: Void.
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr, *next_node;

	if (head == NULL)
	{
		return;
	}

	ptr = *head;

	while (ptr != NULL)
	{
		next_node = ptr->next;
		free(ptr);
		ptr = next_node;
	}
	*head = NULL;
}
