#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count.
 *
 * Return: The number of words in `str`.
 */
int count_words(char *str)
{
	int i, count = 0;
	
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			count++;
	}
	
	return count;
}

/**
 * word_length - Computes the length of a word in a string.
 * @str: The string containing the word.
 *
 * Return: The length of the word.
 */
int word_length(char *str)
{
	int i;
	
	for (i = 0; str[i] != '\0' && str[i] != ' '; i++)
		;
	
	return i;
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: If memory allocation fails or `str` is `NULL` or empty - return `NULL`
 *         Otherwise - return a pointer to an array of words (strings), each ending with '\0'
 */
char **strtow(char *str)
{
	int i, j, k, n, words;
	char **s;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	s = malloc(sizeof(char *) * (words + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0, j = 0; i < words; i++)
	{
		while (str[j] == ' ')
			j++;

		n = word_length(str + j);

		s[i] = malloc((n + 1) * sizeof(char));
		if (s[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(s[k]);
			free(s);
			return (NULL);
		}

		for (k = 0; k < n; k++)
			s[i][k] = str[j+k];
		s[i][k] = '\0';

		j += n;
	}
	s[i] = NULL;

	return (s);
}
