#include "holberton.h"

/**
 * _strchr - Char
 * @s: char
 * @c: char=
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int z;

	for (z = 0; s[z] >= '\0'; z++)
		if (s[z] == c)
			return (s + z);
	return ('\0');
}
