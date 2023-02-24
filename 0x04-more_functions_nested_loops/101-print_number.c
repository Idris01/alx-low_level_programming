#include <stdlib.h>
#include "main.h"

void print_it(int n);

/**
 * print_number - Prints any integer number
 * @n: Number to print
 *
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
	}
	print_it(n);
	/*_putchar('\n');*/
}

/**
 * print_it - Helper function to print a positive  number
 * @n: Number to print
 *
 * Return: void
 */

void print_it(int n)
{
	int rem = abs(n % 10);
	int div = abs(n / 10);

	if (div == 0)
	{
		_putchar('0' + rem);
		return;
	}
	print_it(div);
	_putchar('0' + rem);
}
