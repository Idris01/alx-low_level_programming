#include <string.h>

/**
 * _strcat - concatenate two string
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	char *resp = strcat(dest, src);

	return (resp);
}
