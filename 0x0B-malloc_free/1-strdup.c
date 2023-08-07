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
	int len = 0;
	int i;
	
	if (str == NULL)
	{
		return (NULL);
	}    
	while (*str != '\0')
	{
		len++;
	}
	char *new_str = malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		*(new_str + i) = *(str + i);
	}
	*(new_str + i) = '\0';
	return (new_str);
}
