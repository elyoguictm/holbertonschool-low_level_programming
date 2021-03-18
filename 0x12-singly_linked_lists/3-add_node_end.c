#include "lists.h"

/**
 * add_node_end - add node
 * @head: cabeza
 * @str: string
 *
 * Return: cola
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *nodo;
	list_t *cola;

	cola = *head;
	nodo = malloc(sizeof(list_t));

	if (nodo == NULL)
	{
		return (NULL);
	}

	nodo->str = strdup(str);

	while (str[i])
	{
		i++;
	}
	nodo->len = i;

	if (!*head)
	{
		*head = nodo;
		return (*head);
	}
	while (cola->next != NULL)
	{
		cola = cola->next;
	}

	cola->next = nodo;
	return (cola);
}
