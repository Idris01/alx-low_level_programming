#include <stddef.h>

/**
 * clear_bit - Set the bit at index to
 * @n: pointer to integer
 * @index: integer binary index location
 *
 * Return: integer 1 if sucess else
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	size_t mask;
	int is_one;

	if (n == NULL || index > 32)
		return (-1);

	mask = 1 << index;

	is_one = *n & mask;

	if (is_one)
		*n ^= mask;

	return (1);
}
