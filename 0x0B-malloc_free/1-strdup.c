#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Str
 * @str: str
 * Return: z.
 */

char *_strdup(char *str)
{
	char *z;
	int x, c;

	if (str == NULL)
	{
		return (NULL);
	}

	for (x = 0; str[x] != '\0'; x++)
		;

	z = malloc((x + 1) * sizeof(char));

	if (z == NULL)
	{
		return (NULL);
	}

	for (c = 0; str[c] != '\0'; c++)
	{
		z[c] = str[c];
	}
	z[c] = '\0';
	return (z);

}
