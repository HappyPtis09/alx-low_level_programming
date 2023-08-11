#include "main.h"
#include <stdlib.h>

/**
 * multiply - multiplay two numbers
 * @num1: char
 * @num2: char
 * Return: int
 */
int multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, i, j, k;
	int *result;
	int carry = 0;
	int temp;

	while (num1[len1] != '\0')
		len1++;
	while (num2[len2] != '\0')
		len2++;

	result = calloc(len1 + len2, sizeof(int));

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			temp = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
			result[i + j + 1] = temp % 10;
			carry = temp / 10;
		}
		result[i] += carry;
	}

	i = 0;
	while (result[i] == 0 && i < len1 + len2 - 1)
		i++;
	for (k = i; k < len1 + len2; k++)
	{
		_putchar(result[k] + '0');
	}
	_putchar('\n');

	free(result);

	return (0);
}
/**
 * main - multiplies two positive numbers
 * @argc: int arguments
 * @argv: char array
 * Return:0
 */

int main(int argc, char *argv[])
{
	char *num1;
	char *num2;
	int i;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (98);
	}

	num1 = argv[1];
	num2 = argv[2];
	i = 0;
	while (num1[i] != '\0' && num2[i] != '\0')
	{
		if (num1[i] < '0' || num1[i] > '9' || num2[i] < '0' || num2[i] > '9')
		{
			_putchar('E');
			_putchar('r');
			_putchar('r');
			_putchar('o');
			_putchar('r');
			_putchar('\n');
			return (98);
		}
		i++;
	}

	multiply(num1, num2);

	return (0);
}
