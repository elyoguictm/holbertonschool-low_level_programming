#include "lists.h"

/**
 * add_node - List add a node
 * @head: cabeza
 * @str: string
 * Return: header
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nodo;
	unsigned int z;

	z = 0;

	nodo = malloc(sizeof(list_t));
	if (!nodo)
	{
		return (NULL);
	}
	nodo->str = strdup(str);
	while (str[z])
	{
		z++;
	}
	nodo->len = z;
	nodo->next = *head;
	*head = nodo;
	return (*head);
}
