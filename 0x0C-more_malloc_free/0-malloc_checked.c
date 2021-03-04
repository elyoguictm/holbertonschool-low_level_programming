#include "holberton.h"

/**
 * malloc_checked - Malloc
 * @b: bytes
 *
 * Return: z
 */

void *malloc_checked(unsigned int b)
{
	void *z = NULL;

	z = malloc(b);
	if (z == NULL)
		exit(98);
	return (z);
}
