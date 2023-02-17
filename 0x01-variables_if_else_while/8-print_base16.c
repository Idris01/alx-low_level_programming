#include <stdio.h>

/**
 * main - Entrypoint
 *	Prints all lowercase base 16
 *
 * Return: Always 0
 */
int main(void)
{
	int num = '0';

	for (; num <= '9' ; num++)
		putchar((char) num);

	num = 'a';
	for (; num <= 'f' ; num++)
	{
		putchar((char) num);
		if (num == 'f')
			putchar('\n');
	}

	return (0);
}
