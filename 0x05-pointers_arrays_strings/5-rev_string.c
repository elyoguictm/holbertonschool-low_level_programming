#include "holberton.h"

/**
 *rev_string - reverse strings
 *
 *@s: pointer
 *
 */
void rev_string(char *s)
{
	int a = 0, s = 0;
	char ch;

	while (s[s++])
		a++;

	for (s = a - 1; s >= a / 2; s--)
	{
		ch = s[s];
		s[s] = s[a - s - 1];
		s[a - s - 1] = ch;
	}
}
