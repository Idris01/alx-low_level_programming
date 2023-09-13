#include "search_algos.h"

/**
 * jump_search - Define the jump search algorithm
 * @array: pointer to integer array
 * @size: positive integer size of array
 * @value: integer value to search in the array
 *
 * Return: integer index of the value if found, else -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t block;
	size_t index;

	if (array == NULL)
		return (-1);
	block = sqrt(size);
	for (index = 0; index < size; index += block)
	{
		if (array[index] < value)
			print_jump_check(index, array[index]);
		if (array[index] >= value)
		{
			print_jump_found(index - block, index);
			return (search_block(array, index - block, index, value));
		}
	}
	if (index >= size)
	{
		print_jump_found(index - block, index);
		return (search_block(array, index - block, size - 1, value));
	}
	return (-1);
}

/**
 * search_block - searches for a value within a given block of jump_search
 * @array: pointer to integer array
 * @start: positive integer start index of array
 * @end: positive integer end index of array
 * @val: integer value to search in the array
 *
 * Return: integer index of the value if found, else -1
 */
int search_block(int *array, size_t start, size_t end, int val)
{
	size_t index = start;

	for (; index <= end; index++)
	{
		print_jump_check(index, array[index]);

		if (array[index] == val)
			return (index);
	}
	return (-1);
}

/**
 * print_jump_found - print description for ranges in an array
 * @start: positive integer the start index of array
 * @end: positive integer the end index of the array
 *
 * Return: always void
 */
void print_jump_found(size_t start, size_t end)
{
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
}

/**
 * print_jump_check - print the index and given value
 * @index: positive integer given index
 * @value: integer given value
 *
 * Return: always void
 */
void print_jump_check(size_t index, int value)
{
	printf("Value checked array[%ld] = [%d]\n", index, value);
}
