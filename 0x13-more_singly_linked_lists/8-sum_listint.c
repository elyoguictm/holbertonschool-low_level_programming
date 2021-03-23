#include "lists.h"

/**
 * sum_listint - sum list
 * @head: caebza
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
