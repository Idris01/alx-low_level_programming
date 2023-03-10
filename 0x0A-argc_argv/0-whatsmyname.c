#include <stdio.h>

/**
 * main - Entrypoint
 * Prints the program name
 * @argc: integer number of commandline arguments
 * @argv: array of commandline values
 *
 * Return: integer Always 0
 */

int main(__attribute__((unused)) int argc, char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
