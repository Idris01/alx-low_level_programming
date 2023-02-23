#include "main.h"

/**
 * print_diagonal - Print diagonal line
 * @n: Height of the diagonal line
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int space, width = n;

	while (n > 0)
	{
		space = width - n;

		for (; space > 0; space--)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		n--;
	}
	if (n <= 0)
		_putchar('\n');
}
