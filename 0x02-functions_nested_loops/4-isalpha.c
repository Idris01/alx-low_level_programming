#include <ctype.h>
/**
 * _isalpha - Checks whether a character is an alphabet
 * @c : Character to be checked
 *
 * Return: (1) if 'c' ia alphabet otherwise (0)
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	return (0);
}
