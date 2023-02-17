#include <stdio.h>

/**
 * main - Entrypoint
 *	Prints all lowercase and uppercase
 *	alphabets
 *
 * Return: Always 0
 */
int main(void)
{
	char alpha = 'a';

	do {
		putchar(alpha++);
	} while (alpha <= 'z');

	/* Start processing Uppercase */
	alpha = 'A';

	do {
		putchar(alpha++);
	} while (alpha <= 'Z');

	putchar('\n');

	return (0);
}
