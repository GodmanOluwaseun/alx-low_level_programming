#include "lists.h"

/**
 * add_node - Function that adds a new node at the beginning of a list_t list.
 * @head: Pointer to nodes.
 * @str: Pointer to str to store in node.
 * Return: Pointer to new element.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(list_t));

	if (ptr != NULL)
	{
	ptr->str = strdup(str);

	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->len = strlen(ptr->str);
	ptr->next = *head;
	}
	*head = ptr;

	return (ptr);
}
