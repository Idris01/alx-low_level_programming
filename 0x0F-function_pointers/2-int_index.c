#include <stddef.h>

/**
 * int_index - Find the index of the first match of
 * a given integer
 * @array: pointer to array
 * @size: length of array
 * @cmp: pointer to function
 *
 * Return: integer index that match otherwise -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int itr;
	int val;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	itr = 0;
	for (; itr < size; itr++)
	{
		val = cmp(*(array + itr));
		if (val > 0)
			return (itr);
	}
	return (-1);
}
