#include "search_algos.h"

/**
 * linear_search - Searches for a given value in
 * an array
 * @array: integer pointer to the array
 * @size: positive integer size of the given array
 * @value: integer the number  to find
 *
 * Return: integer first index of value if found
 * else -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array == NULL)
		return (-1);
	while (index < size)
	{
		if (array[index] == value)
			return (index);
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		index++;
	}
	return (-1);
}
