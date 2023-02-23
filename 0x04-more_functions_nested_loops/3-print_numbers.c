#include "main.h"

/**
 * print_numbers - Print single digits Numbers
 *
 * Return: void
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
		_putchar('0' + num);
	_putchar('\n');
}
