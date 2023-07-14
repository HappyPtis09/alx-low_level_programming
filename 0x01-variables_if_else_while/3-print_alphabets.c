#include <stdio.h>
/**
 * main - Enty Point
 *
 *Description : Prints the lowercase alphabet the upper ons
 *
 * Return: Alaways 0
 */
int main(void)
{
	char lett = 'a';
	char LETT = 'A';

	while (lett <= 'z')
	{
		putchar(lett);
		lett++;
	}
	while (LETT <= 'Z')
	{
		putchar(LETT);
		LETT++;
	}
	putchar('\n');
	return (0);
}
