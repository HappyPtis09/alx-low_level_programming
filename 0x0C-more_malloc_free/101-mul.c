#include "main.h"
#include <stdlib.h>
/**
 * multiply - multiply two numbers
 * @num1: int
 * @num2: int
 * Return: an int
 */
int multiply(int num1, int num2)
{
	return (num1 * num2);
}
/**
 * main - multiplies two positive numbers
 * @argc: int
 * @argv: char array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *ptr1, *ptr2;
	int num1;
	int num2;
	int result;
	int numDigits;
	int temp;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (98);
	}
	num1 = strtol(argv[1], &ptr1, 10);
	num2 = strtol(argv[2], &ptr2, 10);

	if (*ptr1 != '\0' || *ptr2 != '\0')
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (98);
	}
	result = multiply(num1, num2);
	if (result == 0)
	{
		_putchar('0');
	}
	else
	{
		if (result < 0)
		{
			_putchar('-');
			result = -result;
		}
		numDigits = 0;
		temp = result;

		while (temp > 0)
		{
			temp /= 10;
			numDigits++;
		}
		char digits;
		int digit;

		digits[numDigits];

		while (result > 0)
		{
			digit = result % 10;
			digits[--numDigits] = digit + '0';
			result /= 10;
		}
		int i;

		for (i = 0; i < sizeof(digits); i++)
		{
			_putchar(digits[i]);
		}
	}
	_putchar('\n');
	return (0);
}
