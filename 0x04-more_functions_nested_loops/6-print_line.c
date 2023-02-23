#include "main.h"

/**
 * print_line - Print a straight line
 * @n: Number of '_' that make up the line
 *
 * Return: void
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
