#include "holberton.h"

/**
 * leet - Leet str
 * @str: string
 * Return: str
 */

char *leet(char *str)
{
	int z = 0, x;

	char lower[] = "aeotl";
	char upper[] = "AEOTL";
	char numbers[] = "43071";

	while (str[z] != '\0')
	{
		for (x = 0; lower[x] != '\0' && upper[x] != '\0'; x++)
		{
			if (str[z] == lower[x] || str[z] == upper[x])
			{
				str[z] = numbers[x];
			}
		}
		z++;
	}
	return (str);
}
