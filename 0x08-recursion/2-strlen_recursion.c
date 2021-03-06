#include "holberton.h"

/**
 * _strlen_recursion - Strlen
 * @s: string
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
