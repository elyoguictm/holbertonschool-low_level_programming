#include "holberton.h"

/**
 * print_number - prints num
 * @n: variable
 * Description: prints
 * Return: 0
 */

void print_number(int n)
{

	unsigned int integer;

	if (n < 0)
	{
		_putchar ('-');
		integer = -n;
	}
	else
	{
		integer = n;
	}
	if (integer / 10 != 0)
	{
		print_number(integer / 10);
	}
	_putchar ((integer % 10) + '0');
}
