#include "holberton.h"

/**
 * *rot13 - Encode rot13
 * @s: s
 * Return: s
 */

char *rot13(char *s)
{
	int z, x;

	char input[] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (z = 0; s[z] != '\0'; z++)
	{
		for (x = 0; x < 54; x++)
		{
			if (((s[z] <= 'z' && s[z] >= 'a') || (s[z] <= 'Z' && s[z] >= 'A'))
			    && s[z] == input[x])
			{
				s[z] = output[x];
				break;
			}
		}
	}
	return (s);
}
