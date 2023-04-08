#include <stddef.h>
#include "main.h"

/**
 * get_bit - get the bit at a given index within
 * the binary representation of an integer
 * @n: number to get bit from
 * @index: integer index to get bit of
 *
 * Return: integer 1 or 0 if success, -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask;
	int is_one;

	if (index > 32)
		return (-1);

	mask = 1 << index;
	is_one = mask & n;

	if (is_one)
		return (1);
	else
		return (0);
}
