#include <stdio.h>

/**
 * main - Entrypoint
 *
 * Return: Always
 */

int main(void)
{
	int i = 1;

	for (; i <= 100; i++)
	{
		if (!(i % 3) && !(i % 5))
			printf("FizzBuzz");
		else if (!(i % 3))
			printf("Fizz");
		else if (!(i % 5))
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
