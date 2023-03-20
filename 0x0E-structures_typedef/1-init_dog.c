#include "dog.h"
#include <stddef.h>
/**
 * init_dog - A function that initializes struct dog
 * @d: struct dog to initialize
 * @name: pointer to name to initialize d with
 * @age: integer age to initialize d with
 * @owner: pointer to string to initialize d with
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
