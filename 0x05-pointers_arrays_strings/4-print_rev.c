#include <string.h>
#include "main.h"

/**
 * print_rev - Print a string in reverse
 * @s: A string to print in reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
	int size = strlen(s) - 1;

	while (size >= 0)
	{
		_putchar(*(s + size--));
	}
	_putchar('\n');
}
