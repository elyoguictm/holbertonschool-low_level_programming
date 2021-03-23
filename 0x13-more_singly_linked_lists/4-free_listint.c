#include "lists.h"

/**
 * free_listint - Free list
 * @head: cabeza
 */

void free_listint(listint_t *head)
{
	listint_t *freee;

	while (head != NULL)
	{
		freee = head;
		head = head->next;
		free(freee);
	}
	
