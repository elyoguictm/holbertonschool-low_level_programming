#include "holberton.h"

/**
 * _strcat - Concatenates
 * @dest: string
 * @src: string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int a_dest, a_src;

	a_dest = 0;
	a_src = 0;
	while (*(dest + a_dest))
		a_dest++;
	while (*(src + a_src))
	{
		*(dest + (a_dest + a_src)) = (*(src + a_src));
		a_src++;
	}
	return (dest);
}
