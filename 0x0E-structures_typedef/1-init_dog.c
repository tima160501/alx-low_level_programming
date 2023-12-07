#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - check code
 * @d: pointer to var to initialize
 * @name: input
 * @age: input
 * @owner: input
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

