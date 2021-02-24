#include "holberton.h"

/**
 * _strlen - Strlen
 * @str: string
 * Return: strlen
 */

int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + _strlen(str + 1));
}

/**
 * check_palindrome - Check
 * @q: left
 * @w: right
 * @p: palindrome
 * Return: 1 if palindrome 0 if not
 */

int check_palindrome(int q, int w, char *p)
{
	if (q >= w)
		return (1);
	else if (p[q] != p[w])
		return (0);
	else
		return (check_palindrome(q + 1, w - 1, p));
}

/**
 * is_palindrome - Palindrome
 * @s: string
 * Return: 1
 */

int is_palindrome(char *s)
{
	int z;

	z = _strlen(s) - 1;
	return (check_palindrome(0, z, s));
}
