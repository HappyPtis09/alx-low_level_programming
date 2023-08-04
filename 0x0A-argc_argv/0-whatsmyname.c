#include "main.h"

/**
 * main - prints the name of the program
 *
 * @argc: argument count
 * @argv: argument vector pointer to pointers
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; argv[0][i]; i++)
	{
		_putchar(argv[0][i]);
		_putchar('\n');
	}
	return (0);
}
