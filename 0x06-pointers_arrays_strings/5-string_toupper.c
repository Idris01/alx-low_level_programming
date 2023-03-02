#include <string.h>
#include <ctype.h>
/**
 * string_toupper - Convert given string to uppercase
 * @str: string to convert to uppercase
 *
 * Return: pointer to character
 */

char *string_toupper(char *str)
{
	char loc;
	int counter = 0;

	while ((loc = *(str + counter)) != '\0')
	{
		*(str + counter) = toupper(loc);
		counter++;
	}
	return (str);
}
