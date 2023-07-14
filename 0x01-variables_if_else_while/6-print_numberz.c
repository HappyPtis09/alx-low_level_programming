#include <stdio.h>

11;rgb:0000/0000/0000/**
11;rgb:0000/0000/0000* main - Entry point
 *
 * Description: Prints all the single digit numbers of base 10 starting from 0,
 *              followed by a new line.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
