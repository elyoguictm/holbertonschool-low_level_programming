#include "holberton.h"

/**
 * puts_half - prints hhalf
 * @str: str
 *
 */

void puts_half(char *str)
{
	int i, n;

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	for (n = (i + 1) / 2; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
