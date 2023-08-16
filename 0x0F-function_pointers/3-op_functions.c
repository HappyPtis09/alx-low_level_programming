#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - add two int
 * @a: first int
 * @b: second int
 *
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	int c;

	c = a + b;

	return (c);
}

/**
 * op_sub - subtract two int
 * @a: first int
 * @b: second int
 *
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	int c;

	c = a - b;

	return (c);
}

/**
 * op_mul - multiply two int
 * @a: first int
 * @b: second int
 *
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	int c;

	c = a * b;

	return (c);
}

/**
 * op_div - div two int
 * @a: first int
 * @b: second int
 *
 * Return: the division of a and b
 */

int op_div(int a, int b)
{
	int c;

	c = a / b;

	return (c);
}

/**
 * op_mod - mod two int
 * @a: first int
 * @b: second int
 *
 * Return: the remainder of a and b
 */

int op_mod(int a, int b)
{
	int c;

	c = a % b;

	return (c);
}
