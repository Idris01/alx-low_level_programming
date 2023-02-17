#include <stdio.h>

/**
 * main - Entrypoint
 *	Prints all lowercase alphabets in reverse
 *	order
 *
 * Return: Always 0
 */
int main(void)
{
	char alpha = 'z';

	do {
		putchar(alpha--);
	} while (alpha >= 'a');
	putchar('\n');
	return (0);
}
