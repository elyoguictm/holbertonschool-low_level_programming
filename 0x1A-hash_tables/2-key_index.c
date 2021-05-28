#include "hash_tables.h"

/**
 * key_index - index key
 * @key: key xd
 * @size: array size
 * Return: hash dhb2
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
