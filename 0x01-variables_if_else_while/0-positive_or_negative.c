#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main funtion
 *
 * Return: 0 to exit
 */

int main(void)
{
	int n;

	strand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)

		printf("d% is positive\n", n);

	else
		if (n == 0)

			printf("d% is zero\n", n);

        else
		if (n < 0)

			printf("is negative\n");

	return (0);
}

