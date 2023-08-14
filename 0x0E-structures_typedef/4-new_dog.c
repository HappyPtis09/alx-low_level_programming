#include <stdlib.h>
#include "dog.h"
/**
 * *_strcpy - copies a stringand the null byte (\0)
 * @dest: pointer to the string
 * @src: string to be copied
 *
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l, i;

	l = 0;

	while (src[l] != '\0')
	{
		l++;
	}

	for (i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * *new_dog - a function that creates a new dog.
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Description: a structure that define the attributes of a dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *cdog;
	int l1, l2, i;

	for (i = 0; name[i] = '\0'; l1++)
		;
	for (i = 0; owner[i] = '\0'; l2++)
		;
	cdog = malloc(sizeof(dog_t));

	if (cdoge == NULL)
	{
		return(NULL);
	}

	cdog->name = malloc(sizeof(char) + (l1 + 1));
	cdog->owner = malloc(sizeof(char) + (l2 + 1));

	if (cdog->name == NULL || cdog->owner == NULL)
	{
		free(cdog->name);
		free(cdog->owner);
		free(cdog);
		return (NULL);
	}
	_strcpy(cdog->name, name);
	_strcpy(cdog->owner, owner);
	cdog->age = age;

	return(cdog);
}
