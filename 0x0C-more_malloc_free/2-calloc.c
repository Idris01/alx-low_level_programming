#include <stdlib.h>

/**
 * _calloc - Allocates memory of size by nmemb
 * bytes
 * @nmemb: unsigned integer number of members
 * @size: number of bytes taken by nmemb
 *
 * Return: pointer to array on success otherwise
 * NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *new_memory;
	unsigned int total_size, loc;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total_size = nmemb * size;
	new_memory = malloc(total_size);

	if (new_memory == NULL)
		return (NULL);
	loc = 0;

	while (loc <= total_size - 1)
	{
		*(new_memory + loc) = 0;
		loc++;
	}
	return (new_memory);
}
