#include "main.h"

void f_print(int prod);
/**
 * times_table - Print multiplication table 0-9
 *
 * Return: void
 */
void times_table(void)
{
	int table = 0;
	int multi;
	int prod;

	while (table <= 9)
	{
		multi = 0;
		while (multi <= 9)
		{
			prod = multi * table;
			if (multi == 0)
				_putchar('0');
			else
				f_print(prod);
			if (multi != 9)
				_putchar(',');
			multi++;
		}
		_putchar('\n');
		table++;
	}
}

/**
 * f_print - print prod right aligned width
 * @prod: Number to print
 *
 * Return: void
 */
void f_print(int prod)
{
	int rem = prod % 10;
	int div = prod / 10;

	_putchar(' ');
	if (div == 0)
		_putchar(' ');
	else
		_putchar('0' + div);
	_putchar('0' + rem);
}

