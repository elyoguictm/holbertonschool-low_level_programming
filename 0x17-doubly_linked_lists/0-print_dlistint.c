#include "lists.h"

/**
 * print_dlistint - Print dlist
 * @h: Head
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n_nodes = 0;

	for (; h; h = h->next)
	{
		printf("%d\n", h->n);
		n_nodes++;
	}
	return (n_nodes);
}
