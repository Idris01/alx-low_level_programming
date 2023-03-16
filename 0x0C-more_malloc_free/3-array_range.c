#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * between min amd max inclusively
 * @min: integer minimum number in the array
 * @max: integer maximum number in the array
 *
 * Return: pointer to array or NULL if error
 */

int *array_range(int min, int max)
{
	int *array;
	int size, i;

	if (max < min)
		return (NULL);
	size = (max - min) + 1;
	array = malloc(sizeof(*array) * size);
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		*(array + i) = min + i;
		i++;
	}
	return (array);
}
