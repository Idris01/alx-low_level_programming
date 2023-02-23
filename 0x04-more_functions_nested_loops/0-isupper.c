#include <ctype.h>

/**
 * _isupper - Check if a given character is Uppercase
 * @c: Character to check
 *
 * Return: 1 if True and 0 otherwise
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	return (0);
}
