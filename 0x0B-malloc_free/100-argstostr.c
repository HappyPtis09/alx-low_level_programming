#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Concatenates all arguments of a program.
 * @ac: The number of arguments.
 * @av: An array of pointers to the arguments.
 *
 * Return: If memory allocation fails or `ac` is `0`, returns `NULL`
 * Otherwise, returns a pointer to a new string of all arguments,
 * separated by a new line.
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, count = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
	}
	len += ac;
	
	str = malloc(sizeof(char) * len);

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[count] = av[i][j];
			count++;
		}
		if (str[count] == '\0')
		{
			str[count] = '\n';
			count++;
		}
	}
	return (str);
}
