#include "main.h"
/**
 * print_alphabet_x10 - Prints lowercase alphabets 10 times
 *
 * Return: Always void
 */
void print_alphabet_x10(void)
{
	int loop = 0;
	char mychar;

	while (loop++ < 10)
	{
		mychar = 'a';
		while (mychar <= 'z')
		{
			_putchar(mychar++);
		}
		_putchar('\n');
	}
}
