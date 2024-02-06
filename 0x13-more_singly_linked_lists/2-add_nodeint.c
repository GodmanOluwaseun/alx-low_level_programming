#include "lists.h"

/**
 * add_nodeint - Function that adds a new node at the beginning of
 * a listint_t list.
 * @head: Pointer to first node;
 * @n: Int to store in node.
 * Return: Pointer to new node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->next = *head;
	ptr->n = n;

	*head = ptr;
	return (ptr);
}
