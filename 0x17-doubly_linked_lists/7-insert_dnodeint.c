#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert node
 * @h: Head
 * @idx: Index
 * @n: New
 * Return: new
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	dlistint_t *prv_posit = *h;

	if (!idx)
		return (add_dnodeint(h, n));

	for (; idx > 1; idx--)
	{
		prv_posit = prv_posit->next;
		if (!prv_posit)
			return (NULL);
	}

	if (!(prv_posit->next))
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = prv_posit;
	new->next = prv_posit->next;
	prv_posit->next->prev = new;
	prv_posit->next = new;
	return (new);
}
