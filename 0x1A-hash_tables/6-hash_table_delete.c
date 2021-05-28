#include "hash_tables.h"

/**
 * hash_table_delete - Frees an entire hash table
 * @ht: Pointer to the hash table.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int z;
	hash_node_t *temp;
	hash_node_t *temp_2;

	if (ht == NULL)
		return;
	for (z = 0; z < ht->size; z++)
	{
		temp = ht->array[z];
		while (temp != NULL)
		{
			temp_2 = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = temp_2;
		}
	}
	free(ht->array);
	free(ht);
}
