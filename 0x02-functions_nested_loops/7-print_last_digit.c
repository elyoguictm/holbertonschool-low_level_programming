#include "holberton.h"

/**
 * print_last_digit
 *
 *
 * Return
 */

int print_last_digit(int num)
{
	int x = num % 10;

	if (x >= 0)
	{
		_putchar(x + '0');
		return (x);
	}

	else
	{
		_putchar(-x + '0');
		return (-x);
	}
}
