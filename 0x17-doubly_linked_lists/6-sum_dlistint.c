#include "lists.h"

/**
 * sum_dlistint - sum dlist
 * @head: Head
 * Return: total
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	for (; head; head = head->next)
		total += head->n;
	return (total);
}
