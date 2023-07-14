#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet followed by a new line
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char A = 'a';

	while (A <= 'z')
	{
		putchar(A);
		A++;
	}

	putchar('\n');
	return (0);
}
