#include "lists.h"

/**
 * pop_listint - Function that deletes the head node of a listint_t linked list
 * and returns the head node’s data (n).
 * @head: Pointer to head node.
 * Return: Data (n) in first node..
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr, *next_node;
	int data;

	if (*head == NULL)
	{
		return (0);
	}

	ptr = *head;
	data = ptr->n;
	next_node = ptr->next;
	free(ptr);
	*head = next_node;

	return (data);
}
