#include "holberton.h"
#include <stdio.h>

/**
* _strncpy - Strn
* @dest: dest
* @src: src
* @n: number
*
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int z;

	z = 0;
	while (src[z] != '\0' && z < n)
	{
		dest[z] = src[z];
		z += 1;
	}
	while (z < n)
	{
		dest[z] = '\0';
		z += 1;
	}
	return (dest);
}
