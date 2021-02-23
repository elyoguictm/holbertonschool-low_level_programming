#include "holberton.h"

/**
 * _strstr - String
 * @haystack: char
 * @needle: char
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	int c, x, z;

	if (*needle == 0)
		return (haystack);

	for (x = 0; haystack[x]; x++)
		for (c = 0, z = x; haystack[z] == needle[c]; c++, c++)
			if (needle[c + 1] == '\0')
				return (haystack + x);
	return (0);
}
