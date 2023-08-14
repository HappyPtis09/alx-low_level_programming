#ifndef DOG_H
#define DOG_H


/**
 * struct dog - difine a dog with a name, age, and owner.
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Description: a structure that define the attributes of a dog
 */

typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_ali;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
