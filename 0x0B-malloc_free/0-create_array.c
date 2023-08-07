#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars,
 * with each element initialized to a specific char
 * @size: size of array
 * @c: character to initialize array elements with
 *
 * Return: pointer to the array, NULL if size = 0 or if memory allocation fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
