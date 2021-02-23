#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - Prints
 * @a: pointer
 * @size: size
 */

void print_diagsums(int *a, int size)
{
	int z, diag1 = 0, diag2 = 0;

	for (z = 0; z < size; z++)
	{
		diag1 += *(a + (size * z + z));
		diag2 += *(a + (size * z + size - 1 - z));
	}
	printf("%d, ", diag1);
	printf("%d\n", diag2);
}
