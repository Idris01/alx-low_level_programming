#include <stdio.h>

/**
 * main - Entrypoint
 *	Prints all lowercase alphabets except 'e'
 *	and 'q'
 *
 * Return: Always 0
 */
int main(void)
{
	char alpha = 'a';

	do {
		if ((alpha != 'e') && (alpha != 'q'))
			putchar(alpha);
		alpha++;
	} while (alpha <= 'z');
	putchar('\n');
	return (0);
}
