#include "holberton.h"

/**
 * square_root - Square but root
 * @z: int
 * @x: int
 * Return: sqaure root
 */

int square_root(int z, int x)
{
	if (x < 0)
		return (-1);
	else if (z * z == x)
		return (z);
	else if (z * z > x)
		return (-1);
	return (square_root(z + 1, x));
}

/**
 * _sqrt_recursion - Sqrt
 * @n: int
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	return (square_root(0, n));
}
