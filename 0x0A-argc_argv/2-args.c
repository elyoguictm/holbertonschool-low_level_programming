#include <stdio.h>

/**
 * main - Main
 * @argc: cdsa
 * @argv: mdsada
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int z;

	for (z = 0; z < argc; z++)
	{
		printf("%s\n", argv[z]);
	}

	return (0);
}
