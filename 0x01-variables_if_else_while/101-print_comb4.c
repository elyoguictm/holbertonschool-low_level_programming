#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int z, x, u;

	for (z = '0'; z <= '7'; z++)
		for (x = z + 1; x <= '8'; x++)
			for (c = x + 1; c <= '9'; c++)
			{
				putchar(z);
				putchar(x);
				putchar(c);
				if (z == '7' && x == '8' && c == '9')
				{
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
	putchar('\n');
	return (0);
}
