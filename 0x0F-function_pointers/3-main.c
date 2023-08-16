#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n1, n2, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && n2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = op_func(n1, n2);
	printf("%d\n", result);

	return (0);
}
