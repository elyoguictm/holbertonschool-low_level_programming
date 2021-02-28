#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main
 * @argc: cargc
 * @argv: argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int z;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	res = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", z);

	return (0);
}
