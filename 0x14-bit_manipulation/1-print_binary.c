#include "holberton.h"
#include <stdlib.h>

/**
 * print_binary - print
 * description: print the binary rep
 * @n: numb
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int z;

	if (n > 1)
		print_binary(n >> 1);
	z = n & 1;

	_putchar(z + '0');
}
