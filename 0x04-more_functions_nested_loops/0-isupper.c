#include "holberton.h"

/**
 * _isupper - uppercase letters
 * @c: int c
 * Return: 1 if uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);

}
