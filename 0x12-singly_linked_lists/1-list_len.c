#include "lists.h"

/**
 * list_len - Prints list
 * @h: h
 * Return: conta
 */

size_t list_len(const list_t *h)
{
	size_t conta = 0;

	while (h != NULL)
	{
		h = h->next;
		conta++;
	}

	return (conta);
}
