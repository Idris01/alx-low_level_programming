#include <stddef.h>

/**
 * set_bit - Set the bit at an index of n to
 * @n: pointer to long integer
 * @index: integer location to set to
 *
 * Return: integer 1 if successful else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	size_t mask;

	if (index > 32 || n == NULL)
		return (-1);

	mask = 1 << index;

	*n |= mask;

	return (1);
}
