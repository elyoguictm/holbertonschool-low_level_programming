#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Type struct dog
 * @d: pointer dogo
 * @name: dogos name
 * @age: dogos age
 * @owner: owner's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
