#include "main.h"

/**
 * create_file - a function that creates a file
 *
 * @filename: pointer const char
 * @text_content: pointer string
 *
 * Return: 1 on success, -1 on failure
 *          if filename is NULL return -1
 */

int create_file(const char *filename, char *text_content)
{
	int file, w, l = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (l = 0; text_content[l]; l++)
			;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(file, text_content, l);

	if (file == -1 || w == -1)
	{
		return (-1);
	}

	close(file);

	return (1);
}
