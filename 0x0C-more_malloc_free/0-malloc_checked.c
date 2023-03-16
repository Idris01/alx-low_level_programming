#include <stdlib.h>

/**
 * malloc_checked - Allocates memory of b bytes
 * @b: integer size of memory to allocate
 *
 * Return: pointer to address of memory on Success
 * otherwise, exit with status code 9
 */

void *malloc_checked(unsigned int b)
{
	void *new_memory = malloc(b);

	if (new_memory == NULL)
		exit(98);
	return (new_memory);
}

