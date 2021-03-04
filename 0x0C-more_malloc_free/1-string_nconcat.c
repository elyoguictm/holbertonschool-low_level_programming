#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concat strings
 * @s1: char
 * @s2: char
 * @n: unsigned int
 * Return: new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	int z = 0;
	unsigned int x, c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[z] != '\0')
		z++;

	string = malloc(sizeof(char) * (z + n + 1));

	if (string == NULL)
		return (NULL);
	for (x = 0; s1[x] != '\0'; x++)
		string[x] = s1[x];
	for (c = 0; c < n && s2[c] != '\0'; x++, c++)
		string[x] = s2[c];
	string[x] = ('\0');
	return (string);
}
