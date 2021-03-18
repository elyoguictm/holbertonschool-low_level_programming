#include "lists.h"

/**
 * free_list - lista libre
 * @head: cabeza
 */

void free_list(list_t *head)
{
	list_t *nodo;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		nodo = head;
		head = head->next;
		free(nodo->str);
		free(nodo);
	}
}
