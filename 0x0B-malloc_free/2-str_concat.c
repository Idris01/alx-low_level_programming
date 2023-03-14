#include <stdlib.h>
#include <string.h>

int copy(char *s1, char *s2, int start);

/**
 * str_concat - Concatenate string s1 and s2
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 *
 * Return: pointer to new string on Success or NULL if error
 */

char *str_concat(char *s1, char *s2)
{
	int size = 0, count = 0;
	char *new_str;

	if (s1 == NULL)
		size += 1;
	else
		size += strlen(s1);
	if (s2 == NULL)
		size += 1;
	else
		size += strlen(s2);
	size += 1; /*Add  Excess space for Null character */
	new_str = (char *) malloc(sizeof(char) * size);
	if (new_str == NULL)
		return (NULL);
	if (s1 == NULL)
	{
		*(new_str + count) = ' ';
		count++;
	}
	else
		count += copy(new_str, s1, count);
	if (s2 == NULL)
	{
		*(new_str + count) = ' ';
		count++;
	}
	else
		count += copy(new_str, s2, count);

	*(new_str + count) = '\0';
	return (new_str);
}

/**
 * copy - Copy all characters in s2 to s1 from position start
 * in s1
 * @s1: pointer to destination string
 * @s2: pointer to source string
 * @start: integer index to begin copying into
 *
 * Return: integer number of items copied
 */

int copy(char *s1, char *s2, int start)
{
	int i = 0;

	while (*(s2 + i) != '\0')
	{
		*(s1 + start) = *(s2 + i);
			start++;
			i++;
	}
	return (i);
}

