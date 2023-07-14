#include <stdio.h>
/**
 * main - Write a program that prints all possible
 *          combinations of single-digit numbers.
 *
 * Return: always 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i != 9)
	{
		putchar(',');
		putchar(' ');
	}
		i++;
	}
	return (0);
}
