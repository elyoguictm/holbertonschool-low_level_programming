#include "holberton.h"

/**
 * factorial - Factorial
 * @z: int
 * Return: recursion
 */

int factorial(int z)
{
	if (z < 0)
	{
		return (-1);
	}
	if (z == 1)
	{
		return (1);
	}
	return (z * factorial(z - 1));
}

