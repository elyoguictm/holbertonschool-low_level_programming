#include "holberton.h"

/**
 * print_chessboard - Chessboard
 * @a: char
 */

void print_chessboard(char (*a)[8])
{
	int z, x;

	for (z = 0; z < 8; z++)
	{
		for (x = 0; x < 8; x++)
		{
			_putchar(*(*(z + a) + x));
		}
		_putchar('\n');
	}
}
