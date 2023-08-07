#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - a function that returns a pointer to a newly
 *    allocated space in memory, 
 *       which contains a copy of the string given as a parameter.
 *
 * @str: char to be duplicated
 * Return: a pointer to a new string, NULL if str = NULL, 
 *     or if insufficient memory was available.
 */

char *_strdup(char *str)
{
	char *i;
	int size = 0;

	i = malloc(sizeof(char) * size);

	if (str = NULL)
	{
		return (NULL);
	}
	for (;str[size] < '\0';size++)
	{
		*i++ = *str++;
	}
	else if
	{
		return (NULL);
	}
}
