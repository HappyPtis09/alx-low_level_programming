#include "main.h"

/**
 * alloc_buffer - 1024 bytes for a buffer.
 * @file: name of file
 *
 * Return: pointer
 */

char *alloc_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file
 *
 * @file: The file to be closed
 *
 * Return: Nothing
 */

void close_file(int file)
{
	int i;

	i = close(file);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", file);
		exit(100);
	}
}

/**
 * main - A program that copies the content of a file to another file
 *
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0
 *         If argument count is incorrect; exit code 97.
 *         If file_from does not exist or cannot be read; exit code 98.
 *         If file_to cannot be created or written to; exit code 99.
 *         If file_to or file_from cannot be closed; exit code 100.
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = alloc_buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	r = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read file_from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(file_to, buffer, r);
		if (file_to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);
	free(buffer);
	close_file(file_from);
	close_file(file_to);
	return (0);
}
