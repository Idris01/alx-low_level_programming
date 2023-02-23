#include "main.h"

/**
 * print_triangle - Print triangle of height size
 * @size: Height of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int space, width, count;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	count = 1;
	for (; count <= size; count++)
	{
		space = size - count;
		width = count;

		while (space > 0)
		{
			_putchar(' ');
			space--;
		}
		while (width > 0)
		{
			_putchar('#');
			width--;
		}
		_putchar('\n');
	}
}
