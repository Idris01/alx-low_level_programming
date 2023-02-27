#include "main.h"

/**
 * _puts - Prints a given string
 * @str: string to print
 *
 * Return: void
 */

void _puts(char *str)
{
	char loc = *str;
	int count = 1;

	while (loc != '\0')
	{
		_putchar(loc);
		loc = *(str + count++);
	}
	_putchar('\n');
}
