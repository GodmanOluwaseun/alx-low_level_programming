#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * index of a listint_t linked list.
 * @head: Pointer to first node.
 * @index: Index of node to be deleted.
 * Return: 1 if successful, -1 if otherwise.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *ptr2;
	unsigned int count = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	ptr =  *head;

	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}

	while (ptr != NULL && count < index)
	{
		ptr2 = ptr;
		ptr = ptr->next;
		count++;
	}

	if (index != count)
	{
		return (-1);
	}
	ptr2->next = ptr->next;
	free(ptr);
	return (1);
}
