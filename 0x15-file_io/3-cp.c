#include "main.h"

/**
 * open_file - Opens a file and handles errors
 *
 * @filename: Name of the file to open
 * @flags: Flags to use when opening the file
 *
 * Return: File descriptor of the opened file
 */
int open_file(const char *filename, int flags)
{
	int fd = open(filename, flags);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", filename);
		exit(98);
	}

	return (fd);
}

/**
 * copy_file - Copies the content of one file to another
 *
 * @file_from: File descriptor of the source file
 * @file_to: File descriptor of the destination file
 */
void copy_file(int file_from, int file_to)
{
	char buffer[BUFFER_SIZE];
	ssize_t r, w;

	while ((r = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		w = write(file_to, buffer, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file\n");
			exit(99);
		}
	}

	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file\n");
		exit(98);
	}
}

/**
 * close_file - Closes a file descriptor and handles errors
 *
 * @fd: File descriptor to close
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor\n");
		exit(100);
	}
}

/**
 * main - A program that copies the content of a file to another file
 *
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	file_from = open_file(argv[1], O_RDONLY);
	file_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC);

	copy_file(file_from, file_to);

	close_file(file_from);
	close_file(file_to);

	return (0);
}
