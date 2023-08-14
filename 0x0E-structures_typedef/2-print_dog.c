#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - a function that prints a struct dog
 * @d: pointer to struct dog
 *
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	d = malloc(sizeof(struct dog));

	if (d == NULL)
	{
		return;
	}
	if (name == NULL)
		return;
	if (age == NULL)
		return;
	if (owner == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;

	printf("Name: %s\n", name);
	printf("Age: %lf\n", age);
	printf("Owner: %s\n", name);
}
