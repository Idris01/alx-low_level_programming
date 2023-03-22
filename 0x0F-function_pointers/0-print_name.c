#include <string.h>
#include "function_pointers.h"

/**
 * print_name - Prints a given name using callback
 * function "f"
 * @name: pointer to string to print
 * @f: pointer to callback function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	f(name);
}
