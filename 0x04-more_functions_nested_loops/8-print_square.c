#include "holberton.h"

/**
 * print_square - square
 * @size: size
 */

void print_square(int size)
{
	int z, x;

	if (size <= 0)
		_putchar(10);
	for (z = 0; z < size; z++)
	{
		for (x = 0; x < size; x++)
			_putchar(35);
		_putchar(10);
	}
}
