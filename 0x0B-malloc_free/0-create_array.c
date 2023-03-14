#include <stdlib.h>

/**
 * create_array - Creates an array of size and initialize to c
 * @size: integer size of the array
 * @c: character to initialize array with
 *
 * Return: pointer to array or NULL if size is
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i; /* iterator */

	if (size == 0)
		return (NULL);
	array = (char *) malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	i = 0;
	for (; i < size; i++)
	{
		*(array + i) = c;
	}
	return (array);
}
