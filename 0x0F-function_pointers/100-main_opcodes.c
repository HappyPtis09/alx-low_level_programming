#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that prints the opcodes of its own main function
 *
 * @argc: arguments's number
 *
 * @argv: arguments's array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int bt, a;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bt = atoi(argv[1]);

	if (bt < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (a = 0; a < bt; a++)
	{
		if (a == bt - 1)
		{
			printf("%02hhx\n", arr[a]);
			break;
		}
		printf("%02hhx ", arr[a]);
	}
	return (0);
}
