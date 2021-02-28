#include <stdio.h>
#include <stdlib.h>

/**
 *main - Print
 *@argc: array.
 *@argv: array.
 *Return: 0.
 */

int main(int argc, char *argv[])
{
	int cents, z = 0, coins = 0;
	int value[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 1)
	{
		printf("0\n");
		return (0);
	}

	while (z < 5 && cents)
	{
		coins += cents / value[z];
		cents %= value[z];
		z++;
	}

	printf("%d\n", coins);
	return (0);
}
