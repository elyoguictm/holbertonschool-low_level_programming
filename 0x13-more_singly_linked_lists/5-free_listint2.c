#include "lists.h"

/**
 * free_listint2 - free.
 * @head: cabeza.
 */

void free_listint2(listint_t **head)
{
	listint_t *freee = NULL;

	if (head)
	{
		while (*head)
		{
			freee = (*head)->next;
			free(*head);
			*head = freee;
		}
	}
}
