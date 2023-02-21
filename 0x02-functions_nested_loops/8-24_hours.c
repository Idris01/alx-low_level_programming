#include "main.h"
/**
 * jack_bauer - print all minutes from 00:00 - 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hour = 24;
	int minute = 60;
	int hour_count = 0;
	int min_count;
	int div, rem;

	while (hour_count < hour)
	{
		min_count = 0;
		while (min_count < minute)
		{
			div = hour_count / 10;
			rem = hour_count % 10;
			_putchar('0' + div);
			_putchar(rem + '0');
			_putchar(':');

			div = min_count / 10;
			rem = min_count % 10;
			_putchar(div + '0');
			_putchar(rem + '0');
			_putchar('\n');
			min_count++;
		}
		hour_count++;
	}
}

