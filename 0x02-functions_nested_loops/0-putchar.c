#include "main.h"

/**
 * main - Enty point
 *
 * program that prints _putchar, followed by a new line.
 *
 * Return: Always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	return (0);
}
