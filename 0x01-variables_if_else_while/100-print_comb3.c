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
	int x, z;

	for (z = '0'; z <= '8'; z++)
		for (x = z + 1; x <= '9'; x++)
		{
			putchar(z);
			putchar(x);
			if (x == '9' && z == '8')
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
