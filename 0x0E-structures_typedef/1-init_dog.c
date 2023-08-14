#include "dog.h"

/**
 * init_dog -  a function that initialize a variable of type struct dog
 *
 * @d: Pointer to the struct dog variable
 * @name: dog's name
 * @age: dog's age
 * @owner:dog's owner
 *
 * Returns: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return(NULL);
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
