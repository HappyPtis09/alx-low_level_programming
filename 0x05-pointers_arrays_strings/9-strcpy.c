
#include "main.h"

/**
 * char *_strcpy -the pointer to destthe pointer to dest a function that copies
 *       the string pointed to by srcthe pointer to dest
 * @dest: char to copy to
 * @src: char to copy from
 * Return: the pointer to dest 
*/
char *_strcpy(char *dest, char *src)
{
	char *t = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (t);
}
