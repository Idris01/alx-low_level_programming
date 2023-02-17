#include <stdio.h>

/**
 * main - Entrypoint
 *	Prints all single digits combination
 *
 * Return: Always 0
 */
int main(void)
{
	int num = '0';

	for (; num <= '9' ; num++)
	{
		putchar(num);

		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		} else
			putchar('\n');
	}
	return (0);
}
