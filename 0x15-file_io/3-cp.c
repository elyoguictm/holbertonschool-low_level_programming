#include "holberton.h"

/**
 * main - Cp content
 * @argc: argc
 * @argv: argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int f, x, l, ff;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	x = open(argv[1], O_RDONLY);

	if (x < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	f = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (f < 0)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	do {
		l = read(x, buffer, 1024);
		ff = write(f, buffer, l);
	} while (l == 1024);

	if (l < 0)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]), exit(98);

	if (ff < 0)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
			argv[2]), exit(99);

	if (close(x) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", x), exit(100);

	if (close(f) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f), exit(100);

	return (0);
}
