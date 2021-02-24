#include "holberton.h"

/**
 * checker - Check
 * @z: int
 * @x: int
 * Return: 1
 */

int checker(int z, int x)
{
	if (x <= 1)
		return (0);
	else if (x % z == 0)
		return (0);
	else if (z >= x / 2)
		return (1);
	return (checker(z + 1, x));
}

/**
 * is_prime_number - Prime number
 * @n: int
 *
 * Return: 1
 */

int is_prime_number(int n)
{
	return (checker(2, n));
}
