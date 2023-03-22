#include <stddef.h>

/**
 * array_iterator - Apply action on all items in an
 * array
 * @array: pointer to integer array
 * @size: length of the array
 * @action: pointer to function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	for (; i < size; i++)
	{
		action(*(array + i));
	}
}
