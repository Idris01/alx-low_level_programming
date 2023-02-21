#include "main.h"
/**
 * print_sign - Prints the sign of a given number n
 * @n : Number to print corresponding sign
 * Description: If n == 0, '0' is printed and 0
 * returned, if n > O, '+' is printed and '1' is
 * returned otherwise '-' is printed and '-1' returned
 *
 * Return: 1 , -1 or 0
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
