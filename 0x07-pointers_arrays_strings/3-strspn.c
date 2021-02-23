#include "holberton.h"

/**
 * _strspn - Str
 * @s: char
 * @accept: char
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int z;
	unsigned int conteo = 0;

	while (*s)
	{
		for (z = 0; accept[z]; z++)
		{
			if (*s == accept[z])
			{
				conteo++;
				break;
			}
			else if (accept[z + 1] == '\0')
				return (conteo);
		}
		s++;
	}

	return (conteo);
}
