#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - New dogo
 * @name: name dogo
 * @age: age dogo
 * @owner: owner of dogo
 *
 * Return: more dogos
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int x, z, c;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (x = 0; name[x]; x++)
		;
	x++;
	dog->name = malloc(x * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (c = 0; c < x; c++)
		dog->name[c] = name[c];
	dog->age = age;
	for (z = 0; owner[z]; z++)
		;
	z++;
	dog->owner = malloc(z * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (c = 0; c < z; c++)
		dog->owner[c] = owner[c];
	return (dog);
}
