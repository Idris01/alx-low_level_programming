#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Create copy of given string str
 * @str: pointer to string
 *
 * Return: pointer to new string On Success amd NULL on failure
 */

char *_strdup(char *str)
{
	char *new_str;
	int size;

	if (str == NULL)
		return (NULL);
	size = strlen(str);

	new_str = (char *) malloc(sizeof(char) * size);

	if (new_str == NULL)
		return (NULL);

	strcpy(new_str, str);
	return (new_str);
}
