#include "lists.h"

/**
 * delete_nodeint_at_index - Del nodes
 * @head: caebza
 * @index: index
 *
 * Return: 1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node;
	listint_t *z;
	unsigned int x = 0;

	z = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = z->next;
		free(z);
	}
	else
	{

		while (x < index - 1)
		{
			z = z->next;
			if (z == NULL)
				return (-1);
			x++;
		}
		node = z;
		node = node->next;
		z->next = node->next;
		free(node);
	}

	return (1);
}
