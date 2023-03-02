#include <string.h>

/**
 * _strncpy - copy n number of characters from src to dest
 * @dest: address of the destination
 * @src: address of source
 * @n: number of characters to copy from src to dest
 *
 * Return: pointer to destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
