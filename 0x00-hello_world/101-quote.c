#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - entrypoint of program
 *
 * Return: Always 0
 */
int main(void)
{
	char data[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, data, strlen(data));
	return (1);
}
