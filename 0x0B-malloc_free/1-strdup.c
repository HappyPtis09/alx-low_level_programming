#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *dup_str;
	int i, len;

	if (str == NULL)
		return (NULL);

	for (len = 0; *str != '\0'; len++)
	{
		str++;
	}

	dup_str = malloc(sizeof(char) * (len + 1));

	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		*(dup_str + i) = *(str + i);

	return (dup_str);
}
