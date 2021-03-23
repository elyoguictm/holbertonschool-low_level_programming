#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - Rev list
 * @head: cabezaz
 * Return: head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev = *head, *aux;

	if (*head == NULL)
		return (NULL);
	while (rev->next != NULL)
	{
		aux = rev->next;
		rev->next = aux->next;
		aux->next = *head;
		*head = aux;
	}
	return (*head);
}
