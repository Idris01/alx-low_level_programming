#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * main - Entrypoint to program that print its name
 *
 * Return: Always
 */

int main(void)
{
	char name[] = __FILE__;
	int size = strlen(name);
	int counter = 0;

	while (counter < size)
	{
		_putchar(*(name + counter));
		counter++;
	}
	_putchar('\n');
	exit(0);
}
