#include <stdio.h>
#include <stdlib.h>

/**
 * main - main
 * @argc: fag
 * @argv: efkkjs
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int z, x, result = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (z = 1; z < argc; z++)
	{
		for (x = 0; argv[z][x] != '\0'; x++)
		{
			if (argv[z][x] < 48 || argv[z][x] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[z]);
	}
	printf("%d\n", result);
	return (0);
}
