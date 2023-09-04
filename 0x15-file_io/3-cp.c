#include "main.h"

/**
 * open_file - Opens a file with the specified filename, flags, and mode.
 *
 * @filename: filename The name of the file to open.
 * @flags: The flags to be used for opening the file.
 * @mode: The file mode for creating the file, if it doesn't exist.
 *
 * Return: The file descriptor of the opened file.
 */

int open_file(const char *filename, int flags, mode_t mode)
{
	int file_descriptor = open(filename, flags, mode);

	if (file_descriptor == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", filename);
		exit(98);
	}
	return (file_descriptor);
}

/**
 * close_file - Closes the file associated with the given file descriptor.
 *
 * @file_descriptor: The file descriptor of the file to close
 *
 * Return : Nothing
 */

void close_file(int file_descriptor)
{
	if (close(file_descriptor) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_descriptor);
		exit(100);
	}
}

/**
 * copy_file - Copies the contents of the source file to the destination file.
 *
 * @source_file: The path to the source file.
 * @destination_file: The path to the destination file.
 *
 * Return: Nothing
 */

void copy_file(const char *source_file, const char *destination_file)
{
	int file_from = open_file(source_file, O_RDONLY, 0);
	int file_to = open_file(destination_file, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	char buffer[BUFFER_SIZE];
	ssize_t r, w;

	while ((r = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		w = write(file_to, buffer, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destination_file);
			exit(99);
		}
	}

	close_file(file_from);
	close_file(file_to);
}

/**
 * main - a program that copies the content of a file to another file
 *
 * @argc: num of arguments
 * @argv: array
 *
 * Return: 0
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	copy_file(argv[1], argv[2]);

	return (0);
}
