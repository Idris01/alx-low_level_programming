#include <string.h>
#include "main.h"
/**
 * main - Entrypoint of program
 *
 * Return: Always 0
 */
int main(void)
{
	char value[] = "_putchar\n";

	for (int i = 0; i < strlen(value); i++)
	{
		_putchar(*(value + i));
	}
	return (0);
}
