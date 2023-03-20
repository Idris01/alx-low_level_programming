#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Free the memory occupied by struct dog
 * @d: pointer to struct dog
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
