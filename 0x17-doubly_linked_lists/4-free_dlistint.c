#include "lists.h"

/**
 * free_dlistint - Free dlist
 * @head: Head
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	for (; tmp; head = tmp)
	{
		tmp = head->next;
		free(head);
	}
}
