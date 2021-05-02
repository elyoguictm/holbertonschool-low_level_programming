#include "lists.h"

/**
 * dlistint_len - Number of elements
 * @h: header
 * Return: nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int nodes = 0;
	dlistint_t *tmp = (dlistint_t *)h;

	if (h)
	{
		while (tmp)
		{
			nodes++;
			tmp = tmp->next;
		}
	}

	return (nodes);
}
