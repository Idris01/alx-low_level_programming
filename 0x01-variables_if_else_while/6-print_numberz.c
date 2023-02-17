#include <stdio.h>

/**
 * main - Entrypoint
 *	Prints all lowercase alphabets
 *
 * Return: Always 0
 */
int main(void)
{
	int num = '0';

	for (; num <= '9' ; num++)
	{
		putchar((char) num);
		if (num == '9')
			putchar('\n');
	}
	return (0);
}
