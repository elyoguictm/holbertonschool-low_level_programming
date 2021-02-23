#include "holberton.h"

/**
 * _strpbrk - String
 * @s: char
 * @accept: char
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int z = 0;
	int x;

	while (s[z])
	{
		x = 0;
		while (accept[x])
		{
			if (s[z] == accept[x])
				return (s + z);
			x++;
		}
		z++;
	}
	return (0);
}
