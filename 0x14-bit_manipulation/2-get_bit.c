#include "holberton.h"

/**
 * get_bit - Gets bit
 * @n: long int
 * @index: index
 * Return: n
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int z;

	if (index > (sizeof(8) * 8))
		return (-1);
	for (z = 0; z < index; z++)
		n = n >> 1;
	return ((n & 1));
}
