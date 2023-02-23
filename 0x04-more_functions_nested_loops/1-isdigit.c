#include <ctype.h>

/**
 * _isdigit - Check if a given character is Digit
 * @c: Character to check
 *
 * Return: 1 if True and 0 otherwise
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	return (0);
}
