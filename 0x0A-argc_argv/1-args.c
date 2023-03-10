#include <stdio.h>

/**
 * main - Entrypoint to program
 * Prints the number of commandline arguments
 * @argc: integer number of commandline arguments
 * @argv: array of commandline arguments
 *
 * Return: integer Always 0
 */

int main(int argc, __attribute__((unused))char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
