#include "search_algos.h"

/**
 * binary_search - Binary search Algorithm
 * @array: pointer to integer array
 * @size: integer size of array
 * @value: integer value to search for
 *
 * Return: integer index of value in array if found else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t end = size - 1;
	size_t mid = (start + end) / 2;

	if (array == NULL)
		return (-1);
	while (end >= start)
	{
		printf("Searching in array: ");
		print_array_binary(array, start, end);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			start = mid + 1;
		else if (array[mid] > value)
			end = mid - 1;
		mid = (start + end) / 2;
	}
	return (-1);
}

/**
 * print_array_binary - Print a given array from index start to end inclusively
 * @array: pointer to array to print from
 * @start: integer start index to begin printing from
 * @end: integer end index to print
 *
 * Return: always void
 */
void print_array_binary(int *array, size_t start, size_t end)
{
	while (start <= end)
	{
		if (start == end)
			printf("%d\n", array[start]);
		else
			printf("%d, ", array[start]);
		start++;
	}
}
