#include "main.h"

/**
 * print_binary -  a function that prints the binary representation of a number
 *
 * @n: long int
 *
 * Return: Nothing
*/

void print_binary(unsigned long int n)
{
	int i, j = 0;
	unsigned long int binary;

	for (i = 63; i >= 0; i--)
	{
		binary = n >> i;

		if (binary & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
		{
			_putchar('0');
		}
	}
	if (!j)
	{
		_putchar('0');
	}
}
