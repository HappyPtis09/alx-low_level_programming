#include <stdio.h>
/**
 * main -Entry point
 *
 * Description: program that prints the lowercase alphabet in reverse,
 *                 followed by a new line.
 *
 * Return: always 0
 */
int main(void)
{
	char let = 'z';

	while (let >= 'a')
	{
		putchar(let);
		let--;
	}
	putchar('\n');
	return (0);
}
