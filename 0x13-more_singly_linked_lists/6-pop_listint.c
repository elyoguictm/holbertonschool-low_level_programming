#include "lists.h"

/**
 * pop_listint - Listint pop
 * @head: cabeza
 *
 * Return: 0
 */

int pop_listint(listint_t **head)
{
	listint_t *copy;
	int va;

	copy = NULL, va = 0;

	if (*head)
	{
		copy = (*head)->next;
		va = (*head)->n;
		free(*head);
		*head = copy;
	}
	return (va);
}
