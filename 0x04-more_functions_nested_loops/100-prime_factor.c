#include <stdio.h>

/**
 * main - prints the largest prime factor
 * printf - prints
 * Description: Print
 * Return: 0
 */

int main(void)
{
long int z, x = 612852475143;
	for (z = 2; z < x; z++)
		if (x % z == 0)
		{
			x = x / z;
		}
	printf("%ld\n", z);
	return (0);
}
