#include "lists.h"

/**
 *print_listint - Imprime listint
 *@h: h
 *
 * Return: conta
 */

size_t print_listint(const listint_t *h)
{
	size_t conta = 0;

	while (h != NULL)

		printf("%d\n", h->n);
		conta++;
		h = h->next;

	return (conta);
}
