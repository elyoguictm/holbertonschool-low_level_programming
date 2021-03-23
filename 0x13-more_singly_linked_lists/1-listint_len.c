#include "lists.h"

/**
 *listint_len - Linked list
 *@h: h
 *Return: conta
 */

size_t listint_len(const listint_t *h)
{
	size_t conta = 0;

	while (h != NULL)
	{
		conta++;
		h = h->next;
	}
	return (conta);
}
