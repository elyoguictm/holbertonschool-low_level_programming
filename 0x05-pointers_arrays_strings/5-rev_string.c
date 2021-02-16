#include "holberton.h"


/**
 * rev_string - rev string
 * @s: s to s
 */

void rev_string(char *s)
{
	int z = 0;
	int x = 0;
	int t;

	while (s[z] != '\0')
	{
		z++;
	}

	z--;

	while (z > x)
	{
		t = s[z];
		s[z--] = s[x];
		s[x++] = t;
	}
}
