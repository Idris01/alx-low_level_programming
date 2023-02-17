#include <stdio.h>

/**
 * main - Entrypoint
 *	Prints all lowercase alphabets
 *
 * Return: Always 0
 */
int main(void)
{
	int num = 0;

	for (; num < 10 ; num++)
	{
		printf("%d", num);
		(num == 9) && printf("\n");
	}
	return (0);
}
