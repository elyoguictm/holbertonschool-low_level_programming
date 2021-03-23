#include "lists.h"

/**
*free_listint2 - Free list
*@head: cabeza
*Return: NULL
*/

void free_listint2(listint_t **head)
{
	listint_t *z, *add;

	if (head == NULL)
		return;

	z = *head;

	if (z != NULL)
	{
		for (; 1 == 1;)
		{
			add = z;
			z = (*z).next;
			free(add);
			if (z == NULL)
				break;
		}
	}
	*head = NULL;
}
