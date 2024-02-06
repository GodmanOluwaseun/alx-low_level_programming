#include "lists.h"

/**
 * add_nodeint_end - Function that adds a new node at the end of
 * a listint_t list.
 * @head: Pointer to first node.
 * @n: Int to store in node.
 * Return: Pointer to new node, NULL if othwerwise.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *new_node;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	ptr = *head;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new_node;

	return (new_node);
}
