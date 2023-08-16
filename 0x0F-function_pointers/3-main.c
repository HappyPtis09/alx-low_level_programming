#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include "function_pointers.h"
/**
 * main - performs simple operations
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0 on success, 98 on wrong number of arguments,
 *         99 on unrecognized operator, 100 on division/modulo by 0
 */
int main(int argc, char *argv[])
{
	int n1, n2;
	int (*oper)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(90);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	oper = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(100);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	printf("%d\n", oper(n1, n2));
	return (0);
}
