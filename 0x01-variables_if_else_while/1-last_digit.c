#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entrypoint
 *	The program generates a random number,
 *	get the last digit and perform some
 *	checks
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	char *info;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (last_digit > 5)
		info = "and is greater than 5";
	else if (last_digit == 0)
		info = "and is 0";
	else
		info = "and is less than 6 and not 0";
	printf("Last digit of %d is %d %s\n", n, last_digit, info);

	return (0);
}
