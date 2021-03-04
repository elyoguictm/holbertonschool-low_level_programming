#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Array range
 * @min: min
 * @max: max
 * Return: z
 */

int *array_range(int min, int max)
{
	int *z;
	int x;
	int q = max - min + 1;

	if (min > max)
		return (NULL);

	z = malloc(sizeof(int) * q);

	if (z == NULL)
		return (NULL);

	for (x = 0; x < q; x++, min++)
	{
		z[x] = min;
	}
	return (z);
}
