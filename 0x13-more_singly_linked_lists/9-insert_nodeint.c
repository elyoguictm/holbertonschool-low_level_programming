#include "lists.h"

/**
 * insert_nodeint_at_index - Insert nodeint
 * @head: cabeza
 * @idx: index
 * @n: number
 * Return: NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *in = *head;
	unsigned int z = 0;

	while (in && z < idx - 1)
	{
		in = in->next;
		z++;
	}
	if (in || (z == idx - 1 || idx == 0))
	{
		new = malloc(sizeof(listint_t));
		if (new)
		{
			new->n = n;
			if (idx == 0)
			{
				new->next = *head;
				*head = new;
			}
			else
			{
				new->next = in->next;
				in->next = new;
			}
			return (new);
		}
	}
	return (NULL);
}
