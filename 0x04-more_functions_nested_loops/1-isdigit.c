#include "holberton.h"

/**
 * _isdigit - check function for a digit
 * @c: c is digit
 * Return: 1 if c is a digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

