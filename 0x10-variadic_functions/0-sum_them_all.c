#include <stdarg.h>

/**
 * sum_them_all - Sum given n number of integers
 * @n: integer number of arguments
 *
 * Return: integer sum of all arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list items;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	va_start(items, n);
	sum = 0;
	i = 0;
	for (; i < n; i++)
		sum += va_arg(items, int);
	va_end(items);
	return (sum);
}
