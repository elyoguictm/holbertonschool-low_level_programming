#include "holberton.h"

/**
 * _print_rev_recursion - Print rev recursion
 * @s: lalalal
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
