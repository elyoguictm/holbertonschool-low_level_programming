#include "holberton.h"

/**
 * read_textfile - Read textfile
 * @filename : file
 * @letters : letters
 * Return: x
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t z = 0, x = 0;
	int l;
	char *buf;

	buf = malloc(letters);
	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);
	l = open(filename, O_RDONLY);

	if (l == -1)
		return (0);

	i = read(l, buf, letters);
	if (z == -1)
		return (0);

	close(l);
	x = write(STDOUT_FILENO, buf, z);
	if (x == -1)
		return (0);

	return (x);
}
