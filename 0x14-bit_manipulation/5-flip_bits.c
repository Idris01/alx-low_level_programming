#include <stddef.h>

/**
 * flip_bits - Count the number of bits in n to be
 * flipped to get m
 * @n: integer first number
 * @m: integer second number
 *
 * Return: integer number of diffrent bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	size_t bits_diff;
	size_t flip_count, mask;
	int is_one;
	int index;
	const int BITS = 32;

	if (n == m)
		return (0);

	bits_diff = n ^ m;
	mask = 1 << (BITS - 1);
	flip_count = 0;

	for (index = 0; index < BITS; index++)
	{
		is_one = mask & (bits_diff << index);
		if (is_one)
			flip_count++;
	}

	return (flip_count);
}
