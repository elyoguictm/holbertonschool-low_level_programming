#include "lists.h"

/**
 * free_listint - Free list
 * @head: cabeza
 */

void free_listint(listint_t *head)
{
	listint_t *free;

	while (head)
	{
		free = head->next;
		free(head);
		head = free;
	}
}
