#include "holberton.h"

/**
 *str_concat - combines two strings
 *@s1: s1
 *@s2: s2
 *Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	int z, x, k, l;
	char *abc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (k = 0; s1[k] != '\0'; k++)
	{}

	for (l = 0; s2[l] != '\0'; l++)
	{}

	abc = malloc((k + l + 1) * sizeof(char));

	if (abc == NULL)
		return (NULL);

	for (z = 0; s1[z] != '\0'; z++)
		abc[z] = s1[z];
	for (x = 0; s2[x] != '\0'; x++)
	{
		abc[z + x] = s2[x];
	}
	abc[z + x] = '\0';

	return (abc);

}
