#include "holberton.h"

/**
 * flip_bits - Flips bits
 * @n: int n
 * @m: int m
 * Return: conta
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x, conta;

	x = n ^ m;
	for (conta = 0; x > 0;)
	{
		if ((x & 1) == 1)
			conta++;
		x = x >> 1;
	}

	return (conta);
}
