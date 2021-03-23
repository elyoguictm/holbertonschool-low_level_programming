#include "lists.h"

/**
 *print_listint - Imprime listint
 *@h: h
 *
 * Return: conta
 */

size_t print_listint(const listint_t *h)
{
	size_t pri;

	for (pri = 0; h != NULL; pri++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}

	return (pri);
}
