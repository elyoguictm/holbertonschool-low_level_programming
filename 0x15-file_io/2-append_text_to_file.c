#include "holberton.h"

/**
 * append_text_to_file - Append text to a file
 * @filename: filename
 * @text_content: text content
 * Return: 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int z, l, x;

	if (filename == NULL)
		return (-1);

	z = open(filename, O_APPEND | O_WRONLY);
	if (z == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l] != '\0'; l++)
			;
		x = write(z, text_content, l);
		if (x == -1)
			return (-1);
	}
	close(z);

	return (1);
}
