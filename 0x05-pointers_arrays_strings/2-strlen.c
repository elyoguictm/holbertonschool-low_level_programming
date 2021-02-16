#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - for strlen lalala
 * @s: s char
 * Return: i lalalala
 */

int _strlen(char *s)
{
	int i;

	for (; *s != '\0'; s++)
		i++;

	return (i);
}
