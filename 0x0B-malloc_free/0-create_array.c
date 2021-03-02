#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - Array
 * @size: num
 * @c: char
 * Return: z.
 */

char *create_array(unsigned int size, char c)
{
	char *z;
	unsigned int x;

	z = malloc(size * sizeof(char));

	if (size == 0)
	{
		return ('\0');
	}
	if (z == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		z[x] = c;
	}
	return (z);
}
