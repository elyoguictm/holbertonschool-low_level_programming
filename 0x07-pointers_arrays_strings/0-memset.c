#include "holberton.h"

/**
 * _memset - Memset
 * @s: char
 * @b: char
 * @n: int
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int z;

	for (z = 0; z < n; z++)
	{
		s[z] = b;
	}
	return (s);
}
