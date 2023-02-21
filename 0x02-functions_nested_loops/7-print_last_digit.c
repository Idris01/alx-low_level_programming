#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - print last digit of n
 * @n: Number to find last digit of
 *
 * Return: Positive Integer
 */
int print_last_digit(int n)
{
	int last_digit = abs(n % 10);

	_putchar('0' + last_digit);
	return (last_digit);
}
