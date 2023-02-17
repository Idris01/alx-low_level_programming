#include <stdio.h>

/**
 * main - Entrypoint
 *	Prints all lowercase alphabets
 *
 * Return: Always 0
 */
int main(void)
{
	char alpha = 'a';

	do {
		putchar(alpha++);
	} while (alpha <= 'z');
	putchar('\n');
	return (0);
}
