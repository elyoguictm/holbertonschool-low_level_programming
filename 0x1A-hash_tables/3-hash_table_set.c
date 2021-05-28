#include "hash_tables.h"

/**
 * hash_table_set - set hash table
 * @ht: hash table
 * @key: the key lol
 * @value: value
 * Return: 1
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *fresh, *temp;
	unsigned int index;

	if (ht == NULL || key == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);

			return (1);
		}
		temp = temp->next;
	}

	fresh = malloc(sizeof(hash_node_t));
	if (fresh == NULL)
		return (0);

	fresh->key = strdup(key);
	fresh->value = strdup(value);
	fresh->next = ht->array[index];
	ht->array[index] = fresh;

	return (1);
}
