#include "holberton.h"

/**
 * set_bit - Set bit
 * @n: n point
 * @index: index
 * Return: 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int set;

	if (index > sizeof(unsigned int) * 8)
		return (-1);

	set = 1;
	set = set << index;
	*n = ((*n) | set);
	return (1);
}
