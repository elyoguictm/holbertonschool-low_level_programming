#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - Call
 * @nmemb: unsign int
 * @size: unsign int
 * Return: c
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int z;
	char *c;

	if (nmemb == 0 || size == 0)
		return (NULL);

	c = malloc(nmemb * size);

	if (c == NULL)
		return (NULL);

	for (z = 0; z < nmemb * size; z++)
	{
		c[z] = 0;
	}
	return (c);
}
