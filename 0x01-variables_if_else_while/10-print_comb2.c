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
	int x, w;

	for (w = '0'; w <= '9'; w++)
		for (x = '0'; x <= '9'; x++)

			putchar(w);
	putchar(x);
	if (x == '9' && w == '9')


	else

		putchar(',');
	putchar(' ');


	putchar('\n');
	return (0);
}
