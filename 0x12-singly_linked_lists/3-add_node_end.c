#include "lists.h"

/**
 * add_node_end - Function that adds a new node at the end of a list_t list.
 * @head: Pointer to first node.
 * @str: Pointer to string to copy into node.
 * Return: Pointer to new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *new_node;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

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
