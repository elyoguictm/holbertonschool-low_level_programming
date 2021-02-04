#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, xd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	ld = n % 10;

	printf("Last digit of %d", n);

	if (ld >= 5)
	{
		printf(" is %d and is greater than 5\n", xd);
	}

	if (ld == 0)
	{
		printf(" is %d and is 0\n", xd);
	}
	else if (ld < 6)
	{
		printf(" is %d and is less than 6 and not 0\n", xd);
	}

	return (0);
}
