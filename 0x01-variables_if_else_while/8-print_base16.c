#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int z, x;

	for (x = '0'; x <= '9'; x++)
		putchar(x);
	for (z = 'a'; z <= 'f'; z++)
		putchar(z);
	putchar('\n');
	return (0);
}
