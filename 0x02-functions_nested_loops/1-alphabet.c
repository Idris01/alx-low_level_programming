#include "main.h"
/**
 * print_alphabet - Print all lowercase Alphabets
 *
 * Return: Always void
 */
void print_alphabet(void)
{
	char val = 'a';

	while (val <= 'z')
		_putchar(val++);
	_putchar('\n');
}
