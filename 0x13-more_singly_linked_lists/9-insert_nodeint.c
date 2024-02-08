#include "lists.h"

/**
 * insert_nodeint_at_index - Function that inserts a new node at a given
 * position.
 * @head: Pointer to first node.
 * @idx: Index to insert new node.
 * @n: Data for new node.
 * Return: Pointer to new node, or NULL.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *ptr2, *new_node;
	unsigned int count = 0;

	if (*head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	ptr = *head;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (ptr != NULL && count < idx)
	{
		ptr2 = ptr;
		ptr = ptr->next;
		count++;
	}

	if (count != idx)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = ptr;
	ptr2->next = new_node;

	return (new_node);
}
