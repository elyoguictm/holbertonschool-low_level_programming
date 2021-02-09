#include "holberton.h"

/**
 *print_alphabet- prints the alphabet void from a - z followed by a new line
 *
 *Return: return void
 */

void print_alphabet(void)
{
	int a;

	a = 'a';
	while (a <= 'z')
	{
		_putchar(a++);
	}
	_putchar(10);

	return ();
}
