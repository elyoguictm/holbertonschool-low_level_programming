#include "hash_tables.h"

/**
 * hash_table_print - prints the keys and values of the hash table
 *
 * @ht: pointer to the hash table
 * Return: no return
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int z;
	hash_node_t *tmp;
	char *kek;

	if (ht == NULL)
		return;

	printf("{");
	kek = "";

	for (z = 0; z < ht->size; z++)
	{
		tmp = ht->array[z];
		while (tmp != NULL)
		{
			printf("%s'%s': '%s'", kek, tmp->key, tmp->value);
			kek = ", ";
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
