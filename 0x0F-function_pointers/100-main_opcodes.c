#include "function_pointers.h"

/**
 * main - Main
 * @argc: Function
 * @argv: Function
 * Return: 0
 */

int main(int argc, char *argv[])
{
	register int z, numero;
	char *ptr = (char *)main;

	if (argc != 2)
		printf("Error\n"), exit(1);
	numero = atoi(argv[1]);
	if (numero < 0)
		printf("Error\n"), exit(2);
	for (z = 0; z < numero - 1; z++)
		printf("%02hhx ", ptr[z]);
	printf("%02hhx\n", ptr[z]);
	return (0);
}
