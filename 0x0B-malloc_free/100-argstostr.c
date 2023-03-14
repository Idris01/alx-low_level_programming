#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int copy(char *s1, char *s2, int start);

/**
 * argstostr - Convert commandline arguments to a
 * single string
 * @ac: integer numner of arguments
 * @av: pointer to array of strings
 *
 * Return: pointer to string On Success else NULL
 */

char *argstostr(int ac, char **av)
{
	int counter, size, itr;
	char *new_str;

	if (ac == 0 || av == NULL)
		return (NULL);
	size = 0;
	itr = 0;
	for (; itr < ac; itr++)
	{
		size += strlen(*(av + itr));
		size++;
	}
	size++; /* space for the null pointer */
	new_str = (char *) malloc(sizeof(char) * size);
	if (new_str == NULL)
		return (NULL);
	counter = 0;
	itr = 0;
	for (; itr < ac; itr++)
	{
		counter += copy(new_str, *(av + itr), counter);
		*(new_str + counter) = '\n';
		counter++;
	}
	*(new_str + counter) = '\0';
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
