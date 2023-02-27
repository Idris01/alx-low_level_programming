#include <string.h>
#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: string to print half of
 *
 * Return: void
 */

void puts_half(char *str)
{
	int size = strlen(str) - 1;
	int half = size / 2;

	if (size % 2 == 1)
		half = (size - 1) / 2;

	while (half <= size)
	{
		_putchar(*(str + ++half));
	}
	_putchar('\n');
}
