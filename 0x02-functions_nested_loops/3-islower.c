#include "holberton.h"

/**
 * _islower: lowercase letters
 * 
 *
 * Return: 1 lowercase 0 not
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
