#include <stdio.h>

/**
 * main - Entrypoint to program
 * Prints all commandline Arguments of the progra
 * @argc: integer number of arguments
 * @argv: array of arguments
 *
 * Return: integer Always 0
 */

int main(int argc, char **argv)
{
	int num = 0;

	while (num < argc)
	{
		printf("%s\n", *(argv + num));
		num++;
	}
	return (0);
}
