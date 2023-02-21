#include <ctype.h>
#include "main.h"
/**
 * _islower - Check if a given character 'c' is lowercase
 * @c: Character to be checked if lowercase
 *
 * Return: (1) if true (0) if false
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
