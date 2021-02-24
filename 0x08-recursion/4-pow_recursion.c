#include "holberton.h"

/**
 * _pow_recursion - Pow recursion
 * @x: int
 * @z: int
 * Return: recursion
 */

int _pow_recursion(int x, int z)
{
	if (z < 0)
	{
		return (-1);
	}
	if (z == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, z - 1));
}
