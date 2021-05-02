#include "lists.h"

/**
 * get_dnodeint_at_index - Get int at index
 * @head: Head
 * @index: Index
 * Return: Head
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index; index--)
	{
		if (!head)
			return (NULL);
		head = head->next;
	}
	return (head);
}
