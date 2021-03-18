#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints a list
 * @h: point h
 * Return: return test
 */

size_t print_list(const list_t *h)
{
	size_t test1 = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);
		test1++;
		h = h->next;
	}

	return (test1);
}
