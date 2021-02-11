#include "holberton.h"
/**
 * print_triangle - triangle
 * @size: size
 */

void print_triangle(int size)
{
	int z, x, c;

	if (size <= 0)
		_putchar('\n');
	for (z = 0; z < size; z++)
	{
		for (x = size - z; x > 1; x--)
			_putchar(' ');
		for (c = z + x; c >= 1; c--)
			_putchar('#');
		_putchar('\n');
	}
}
