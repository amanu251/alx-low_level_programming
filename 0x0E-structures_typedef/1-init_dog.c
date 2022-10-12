#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initalize struct dog
 * @d: pointer to structure
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
