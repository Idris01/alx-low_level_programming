#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Define a structure named dog
 * @name: pointer to string
 * @age: float
 * @owner: pointer to string
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
