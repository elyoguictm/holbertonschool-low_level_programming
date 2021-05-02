#include "lists.h"
#include <stdio.h>

/**
 * delete_dnodeint_at_index - Delete node
 * @head: Pointer
 * @index: Index
 * Return: 1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *delete_node = *head;

	if (!head || !(*head))
		return (-1);

	for (; index > 1; index--)
	{
		delete_node = delete_node->next;
		if (!delete_node)
			return (-1);
	}

	if (!index)
	{
		if (!(delete_node->next))
			*head = NULL;
		else
			*head = delete_node->next;
	}
	else
		delete_node = delete_node->next;

	if (delete_node->prev)
		delete_node->prev->next = delete_node->next;

	if (delete_node->next)
		delete_node->next->prev = delete_node->prev;

	free(delete_node);

	return (1);
}
