#include <string.h>
#include "main.h"

/**
 * puts2 - Print odd indexes of string starting from first character
 * @str: String to print odder index of
 *
 * Return: void
 */

void puts2(char *str)
{
	int size = strlen(str);
	int start = 0;

	while (start <= size - 1)
	{
		_putchar(*(str + start));
		start += 2;
	}
	_putchar('\n');
}
