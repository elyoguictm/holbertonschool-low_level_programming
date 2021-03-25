#include "holberton.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * binary_to_uint - Binary to uint
 * @b: b
 * Return: res
 */

unsigned int binary_to_uint(const char *b)
{
	int z, x, res = 0;

	if (b == NULL)
		return (0);

	for (z = 0; b[z] != '\0'; z++)
	{
		if (b[z] == '0')
		{
			x = 0;
		}

		else if (b[z] == '1')
		{
			x = 1;
		}
		else
			return (0);

		res += x;

		if (b[z + 1] != '\0')
			res = res << 1;
	}
	return (res);
}
