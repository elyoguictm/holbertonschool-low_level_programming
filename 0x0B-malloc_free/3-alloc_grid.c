#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - print a bidimensinal array.
 * @width: rows.
 * @height: colums.
 * Return: c.
 */

int **alloc_grid(int width, int height)
{
	int **c;
	int z, x, o;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	c = malloc(height * sizeof(int *));

	if (c == NULL)
	{
		return (NULL);
	}

	for (z = 0; z < height; z++)
	{
		c[z] = malloc(width * sizeof(int));
		if (c[z] == NULL)
		{
			for (o = 0; o < z; o++)
			{
				free(c[o]);
			}
			free(c);
			return (NULL);
		}
		for (x = 0; x < width; x++)
		{
			c[z][x] = 0;
		}
	}
	return (c);
}
