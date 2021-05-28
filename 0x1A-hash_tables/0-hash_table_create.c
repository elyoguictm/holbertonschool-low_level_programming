#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: array size
 *
 * Return: t a b l e
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table == NULL)
		return (NULL);

	table->size = size;

	return (table);
}
