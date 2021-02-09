#include "holberton.h"

/**
 * times_table - prints the table
 *
 * Return: the last digit of the number
 */

void times_table(void)
{
	int z, x;

	for (z = 0; z < 10; z++)
	{
		for (x = 0; x < 10; x++)
		{
			if ((z * x) >= 10)
			{
				_putchar((z * x) / 10 + '0');
				_putchar((z * x) % 10 + '0');
			}
			else
			{
				if (x != 0)
					_putchar(' ');
				_putchar((z * x) + '0');
			}
			if (x == 9)
				continue;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
