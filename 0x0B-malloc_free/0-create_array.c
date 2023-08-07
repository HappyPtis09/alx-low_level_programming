#include <stdlib.h>
#include "main.h"

/**
 * *create_array - a function that creates an array of chars,
 *    and initializes it with a specific char
 * @size: unsigned int 
 * @c: char
 * Return: pointer to an array, NULL if size 0
 */

char *create_array(unsigned int size, char c)
{
	char *i;

	if (size > 0)
	{
	i = malloc(sizeof(char) * size);
	}
	else if (size == 0)
	{
		return (NULL);
	}
	return (*i);
}
