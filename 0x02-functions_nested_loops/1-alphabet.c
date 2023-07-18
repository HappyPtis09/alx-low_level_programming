#include "main.h"
/**
 * main - entry point
 *
 * function that prints the alphabet, in lowercase
 * , followed by a new line.
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	char i = 'a';
	while (i < 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
