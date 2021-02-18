#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry main
 * Return: 0
 */

int main(void)
{
	int z, lastc = 0;
	char asci[] = "abcdefghijklmnopqrstuvwxyzBCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	srand(time(0));
	while (lastc < 2772 - 122)
	{
		z = rand() % 61;
		lastc += asci[z];
		printf("%c", asci[z]);
	}
	printf("%c", 2772 - lastc);
	return (0);
}
