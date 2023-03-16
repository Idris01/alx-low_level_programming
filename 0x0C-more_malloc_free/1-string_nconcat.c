#include <string.h>
#include <stdlib.h>

int copy(char *dest, char *src, int d_start, int n);

/**
 * string_nconcat - comcatenate first n characters in
 * s2 to s1
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: integer number of characters to append from s2
 * to s1
 *
 * Return: pointer to new string On Success otherwise
 * NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1, size2; /* size of s1 and s2 */
	char *new_string; /* pointer to new string */
	int new_size; /* size of new_string */
	int pos; /* position for traversing new_string */

	size1 = 0;
	size2 = 0;
	if (s1 != NULL)
		size1 = strlen(s1);
	if (s2 != NULL)
	{
		size2 = strlen(s2);
		if (size2 > n)	/* copy n from s2*/
			size2 = n;
	}
	new_size = size1 + size2;

	new_string = malloc(new_size + 1);
	if (new_string == NULL)
		return (NULL);

	pos = 0;
	if (size1 > 0)
		pos = copy(new_string, s1, pos, size1);
	if (size2 > 0)
		pos = copy(new_string, s2, pos, size2);

	*(new_string + pos) = '\0';
	return (new_string);
}

/**
 * copy - Appends the first n characters in src to
 * dest
 * @dest: pointer to destination address
 * @src: pointer to source string address
 * @d_start: integer start index for append on dest
 * @n: integer number of characters to append
 *
 * Return: integer index of next index in dest after
 * appending
 */

int copy(char *dest, char *src, int d_start, int n)
{
	int i = 0;

	while (i < n)
	{
		*(dest + d_start + i) = *(src + i);
		i++;
	}
	return (d_start + i);
}
