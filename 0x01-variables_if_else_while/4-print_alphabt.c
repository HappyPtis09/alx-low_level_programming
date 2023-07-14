#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: program that prints the alphabet in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	char lett = 'a';

	while (lett <= 'z')
	{
		if (lett != 'q' && lett != 'e')
		{
			putchar(lett);
		}
		lett++;
	}
	putchar('\n');
	return (0);
}
