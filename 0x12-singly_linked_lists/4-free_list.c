#include "lists.h"

/**
 * free_list - Function that frees a list_t list.
 * @head: Pointer to list to free.
 * Return: Void.
 */

void free_list(list_t *head)
{
	list_t *ptr;

	if (head == NULL)
	{
		return;
	}

	ptr = head;

	while (ptr != NULL)
	{
		if (ptr->str != NULL)
		{
		free(ptr->str);
		}
		free(ptr);
		ptr = ptr->next;
	}
}
