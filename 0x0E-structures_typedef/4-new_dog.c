#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new struct dog
 * @name: pointer to string name of dog
 * @age: float age of dog
 * @owner: pointer to string owner of new dog
 *
 * Return: pointer to new dog on success otherwise
 * NULL on failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name;
	char *new_owner;

	new_dog = malloc(sizeof(*new_dog));

	new_name = malloc((strlen(name) + 1) * sizeof(*new_name));

	new_owner = malloc((strlen(owner) + 1) * sizeof(*new_owner));

	if (new_dog == NULL || new_name == NULL || new_owner == NULL)
		return (NULL);
	strcpy(new_name, name);
	strcpy(new_owner, owner);
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;
	return (new_dog);
}
