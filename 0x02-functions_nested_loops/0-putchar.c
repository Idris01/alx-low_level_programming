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
	int i;

	for (i = 0; i < (int) strlen(value); i++)
	{
		_putchar(*(value + i));
	}
	return (0);
}
