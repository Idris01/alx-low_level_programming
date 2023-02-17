#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entrypoint
 *	Generate a random integer 'n' and output
 *	whether the n is zero, less than zero or
 *	greater than zero
 *
 * Return: Always
 */
int main(void)
{
	int n;
	char *info;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
		info = "is zero";
	else if (n < 0)
		info = "is negative";
	else
		info = "is positive";

	printf("%d %s\n", n, info);
	return (0);
}
