#include "holberton.h"

/**
 * _memcpy - Memcpy
 * @dest: char
 * @src: char
 * @n: int
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int z;

	for (z = 0; z < n; z++)
	{
		dest[z] = src[z];
	}
	return (dest);
}
