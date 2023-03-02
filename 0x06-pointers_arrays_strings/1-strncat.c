#include <string.h>

/**
 * _strncat - Concatenates n number of characters from src to dest
 * @src: string source of the n number of character
 * @dest: string destination for which n number of characters will be appended
 * @n: integer number of character to copy from
 * the beginning of src and prepended to dest
 *
 * Return: pointer to string which is the outcome of the concatenation
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
