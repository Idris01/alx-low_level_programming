#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entrypoint to the program
 * Prints the product of the two commandline arguments
 * @argc: integer number of commandline arguments
 * @argv: array of commandline arguments
 *
 * Return: integer Always 0
 */

int main(int argc, char **argv)
{
	int first, second;

	if (argc < 3)
		printf("Error\n");
	else
	{
		first = atoi(*(argv + 1));
		second = atoi(*(argv + 2));
		printf("%d\n", second * first);
	}
	return (0);
}
