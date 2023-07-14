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

	while (lett <= 'z' || LESS <= 'Z')
	{
		putchar(lett);
		lett++;
		putchar(LESS);
		LETT++;
	}
	putchar('\n');
	return (0);
}
