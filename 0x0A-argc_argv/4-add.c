#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - string if there are digit
 * @str: array str
 *
 * Return: 0
 */
int check_num(char *str)
{
	unsigned int c;

	c = 0;
	while (c < strlen(str))

	{
		if (!isdigit(str[c]))
		{
			return (0);
		}

		c++;
	}
	return (1);
}

/**
 * main - print the name of the program
 * @argc: num arguments
 * @argv: Arguments
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int c;
	int sti;
	int sum = 0;

	c = 1;
	while (c < argc)
	{
		if (check_num(argv[c]))

		{
			sti = atoi(argv[c]);
			sum += sti;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		c++;
	}

	printf("%d\n", sum);

	return (0);
}
