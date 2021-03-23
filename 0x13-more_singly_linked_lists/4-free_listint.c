#include "lists.h"

/**
 * free_listint - Free list
 * @head: cabeza
 * Return: 0
 */

void free_listint(listint_t *head)
{
	listint_t *aux = head;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
