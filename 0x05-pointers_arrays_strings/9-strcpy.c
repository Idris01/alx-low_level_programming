#include <string.h>

/**
 * _strcpy - copy string from src to dest
 * @src: source of the string
 * @dest: destination of the string
 *
 * Return: Pointer to string
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
