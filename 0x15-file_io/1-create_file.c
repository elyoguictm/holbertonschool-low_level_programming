#include "holberton.h"

/**
 * create_file - Create a new file
 * @filename : filename
 * @text_content : text content
 * Return: 1
 */

int create_file(const char *filename, char *text_content)
{
	int f = 0, z = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[z])
		{
			z++;
		}
	}

	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (f < 0)
		return (-1);

	write(f, text_content, z);

	return (1);
}
