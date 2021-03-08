#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Space of a dogo structure
 *
 * @d: dogo
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);

}
