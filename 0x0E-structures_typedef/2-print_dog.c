#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print struct dog
 * @d: struct pointer
 *
 * Return: nothing
 */


void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL && d->owner == NULL)
		printf("(nil)\n");
	printf("Name: %s \n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
