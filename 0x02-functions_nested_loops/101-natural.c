#include <stdio.h>
/**
 * main - entrypoint to application
 *
 * Return: Always (0)
 */
int main(void)
{
	int counter = 0;
	int total = 0;

	while (counter < 1024)
	{
		if (((counter % 3) == 0) || ((counter % 5) == 0))
		{
			total += counter;
		}
		counter++;
	}
	printf("%d\n", total);
}
