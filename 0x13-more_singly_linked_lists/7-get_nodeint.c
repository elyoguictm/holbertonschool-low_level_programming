#include "lists.h"

/**
 * get_nodeint_at_index - Get node
 * @head: cabeza
 * @index: node
 * Return: index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *indexx = NULL;
	unsigned int z = 0;

	if (head)
	{
		indexx = head;
		while (z < index && indexx)
		{
			indexx = indexx->next;
			z++;
		}
	}
	return (indexx);
}
