#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints
 *               it to the POSIX standard output
 *
 * @filename: const char
 * @letters: letters num
 *
 * Return: the actual number of letters it could read and print,
 *          if the file can not be opened or read, 0
 *            if filename is NULL return 0,
 *             if write fails or does not write the expected amount of bytes, 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t file;
	ssize_t w;
	ssize_t r;

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	r = read(file, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	free(buff);
	close(file);
	return (w);
}
