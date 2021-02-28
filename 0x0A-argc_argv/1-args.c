#include <stdio.h>

/**
 * main - main
 * @argc: fsa
 * @argv: arg
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	if (argv[0] != '\0')
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
