#include <stddef.h>
#include "main.h"

/**
 * print_binary - Prints the binary form of a number
 * @n: long integer number to print binary of
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	const unsigned long int BITS = 32;
	unsigned long int mask = 1 << (BITS - 1);
	int has_one = 0; /* flag to remove leading zeros */
	int is_one;
	unsigned long int index;

	for (index = 0; index < BITS; index++)
	{
		is_one = mask & (n << index);

		if (is_one)
		{
			has_one = 1;
			_putchar('1');
		}
		else if (has_one) /* prints zero only if preceeded by 1 */
			_putchar('0');
	}
	if (!has_one) /* the number is zero so print only one 0 */
		_putchar('0');
}
