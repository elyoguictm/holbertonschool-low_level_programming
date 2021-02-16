#include "holberton.h"
#include "string.h"

/**
 * *_strcpy - Entry point
 * @src: srcsrc
 * @dest: destaha
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int z;

	for (z = 0; src[z]; z++)
	{
		dest[z] = src[z];
	}
	dest[z] = src[z];
	return (dest);
}
