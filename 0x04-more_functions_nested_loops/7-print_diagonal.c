#include "holberton.h"

/**
 * print_diagonal - print
 * @n: int
 */

void print_diagonal(int n)
{
	int x;
	int a;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (a = 0; a < x; a++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
