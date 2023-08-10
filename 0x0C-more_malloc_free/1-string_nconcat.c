#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - a function that concatenates two strings.
 *
 * @s1: char
 * @s2: char
 * @n: unsigned int
 * Return: The returned pointer shall point to a newly allocated space in memory
 *   which contains s1, followed by the first n bytes of s2, and null terminated
 *         If the function fails, it should return NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n) {
	char *conca;
	unsigned int a, b, i;

	if (s1 == NULL) {
		s1 = "";
	}
	if (s2 == NULL) {
		s2 = "";
	}

	for (a = 0; s1[a]; a++);
	for (b = 0; s2[b]; b++);

	conca = malloc(sizeof(char) * (a + n + 1));

	if (conca == NULL) {
		return NULL;
	}

	for (i = 0; i < a; i++) {
		conca[i] = s1[i];
	}

	for (i = 0; i < n && s2[i]; i++) {
		conca[a + i] = s2[i];
	}

	conca[a + i] = '\0';

	return conca;
}
