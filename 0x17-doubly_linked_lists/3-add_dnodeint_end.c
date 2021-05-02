#include "lists.h"

/**
 * add_dnodeint_end - Add a new node
 * @head: head
 * @n: Data
 * Return: new
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *end = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!end)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	for (; end->next;)
		end = end->next;
	new->prev = end;
	end->next = new;

	return (new);
}
