#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 *
 * @filename: pointer const char
 * @text_content: pointer string
 *
 * Return: 1 on success and -1 on failure
 *         If filename is NULL return -1
 *          If text_content is NULL, do not add anything to the file;
 *            Return 1 if the file exists and -1 if the file does not exist or
 *              if you do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, l = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (l = 0; text_content[l]; l++)
			;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, l);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
