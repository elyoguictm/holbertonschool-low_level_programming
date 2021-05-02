#include "lists.h"

/**
 * print_dlistint - Print dlinked list
 * @h: header=
 * Return: z
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t zz = 0;
	int prints = 0;

	for (z = 0; h != NULL; z++)
	{
		if (h->prev != NULL && prints == 0)
		{
			h = h->prev;
			continue;
		}
		else if (h->prev == NULL)
		{
			prints = 1;
			z = 0;
		}
		printf("%i\n", h->n);
		h = h->next;

	}
	return (z);
}
