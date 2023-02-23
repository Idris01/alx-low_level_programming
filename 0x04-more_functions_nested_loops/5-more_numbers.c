#include "main.h"

/**
 * more_numbers - print from 1-14 ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int num, count = 0;
	int div, rem;

	while (count < 10)
	{
		num = 0;
		for (; num <= 14; num++)
		{
			div = num / 10;
			rem = num % 10;

			if (num >= 10)
				_putchar('0' + div);
			_putchar('0' + rem);
		}
		count++;
		_putchar('\n');
	}
}
