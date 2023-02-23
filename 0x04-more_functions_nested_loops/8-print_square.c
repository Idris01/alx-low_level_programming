#include "main.h"

/**
 * print_square - Print square of given size
 * @size: Lenght of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int width, height;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	height = 0;

	for (; height < size; height++)
	{
		width = 0;
		for (; width < size; width++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
