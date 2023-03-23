#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Print given number of strings
 * separated by separator
 * @separator: pointer to string
 * @n: integer number of strings to print
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list items;
	unsigned int itr;
	char *item;

	va_start(items, n);
	itr = 0;
	for (; itr < n; itr++)
	{
		item = va_arg(items, char *);
		if (item == NULL)
			printf("(nil)");
		else
			printf("%s", item);

		if (itr < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(items);
	printf("\n");
}
