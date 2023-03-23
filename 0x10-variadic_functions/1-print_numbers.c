#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_numbers - Print given numbers separated by
 * separator
 * @separator: pointer to character
 * @n: number of arguments
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list items;
	unsigned int counter;

	va_start(items, n);

	counter = 0;
	for (; counter < n; counter++)
	{
		printf("%d", va_arg(items, int));
		if (separator != NULL && counter < (n - 1))
			printf("%c", *separator);
		if (counter < (n - 1))
			printf(" ");
	}
	printf("\n");
}
