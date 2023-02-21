#include <stdlib.h>
#include "main.h"
void print_num(int n);
/**
 * print_to_98 - prints from number  'n' to 98
 * @n: starting point to begin printing
 *
 * Return: Always void
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 0)
			_putchar('-');
		print_num(abs(n));
		_putchar(',');
		_putchar(' ');

		n += (n > 98) ? -1 : 1;
	}
	print_num(98);
	_putchar('\n');
}

/**
 * print_num - Print a given number
 * @n: Number to print
 *
 * Return: Always void
 */
void print_num(int n)
{
	int div = n / 10;
	int rem = n % 10;

	if ((rem == 0) && (div == 0))
	{
		_putchar('0' + rem);
		return;
	}
	if ((rem > 0) && (div == 0))
	{
		_putchar('0' + rem);
		return;
	}
	print_num(div);
	_putchar('0' + rem);
}
