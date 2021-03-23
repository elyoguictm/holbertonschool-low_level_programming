#include "lists.h"

/**
 * add_nodeint_end - add node
 * @head: cabeza
 * @n: n
 * Return: new or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *add;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
		*head = new;
	else
	{
		add = *head;
		while (add->next)
			add = add->next;
		add->next = new;
	}
	return (new);
}
