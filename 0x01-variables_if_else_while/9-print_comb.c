#include <stdio.h>
/**
 * main - Write a program that prints all possible
 *          combinations of single-digit numbers.
 *
 * Return: always 0
 */
int main(void)
{
	int i = 1;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	if (i != 9)
	{
		putchar(',');
		putchar(' ');
	}
	return (0);
}
