#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of two digits.
 * Numbers must be separated by ,, followed by a space.
 * The two digits must be different.
 * 01 and 10 are considered the same combination of the two digits 0 and 1.
 * Print only the smallest combination of two digits.
 * Numbers should be printed in ascending order, with two digits.
 * Use only putchar function.
 * Use putchar five times maximum in your code.
 * You can't use any variable of type char.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 100)
	{
		int j = i + 1;

		while (j < 100)
		{
			if (i / 10 != j / 10 && i % 10 != j % 10)
			{
				if (i > 0)
				{
					putchar(',');
					putchar(' ');
				}
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');
			}
			++j;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
