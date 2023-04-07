#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include <ctype.h>

size_t _pow(int base, int exp);

/**
 * binary_to_uint - convert a binary string to integer
 * @b: pointer to string
 *
 * Return: unsigned integer decimal value
 */

unsigned int binary_to_uint(const char *b)
{
	size_t dec_value;
	int index, size;
	char c;

	if (b == NULL)
		return (0);

	size = strlen(b);
	index = size - 1;
	dec_value = 0;
	for (; index >= 0; index--)
	{
		c = *(b + index);
		switch (c)
		{
			case '0':
				break;
			case '1':
				dec_value += _pow(2, (size - index - 1));
				break;
			default:
				return (0);
		}
	}
	return (dec_value);
}


/**
 * _pow - Calculate the value of base raise to the power of exp
 * @base: integer base number
 * @exp: integer exponential power to raise base to
 *
 * Return: unsigned integer base^exp
 */

size_t _pow(int base, int exp)
{
	size_t ans;

	if (exp < 0)
		return (0);
	if (exp == 0)
		return (1);

	ans = 1;

	while (exp != 0)
	{
		ans *= base;
		exp--;
	}
	return (ans);
}
