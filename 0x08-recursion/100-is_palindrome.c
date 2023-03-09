#include <string.h>

int palindrome(char *s, int start, int end);
/**
 * is_palindrome - Check if a given string is palindrom
 * @s: pointer to string
 *
 * Return: 1 if s is palindrome otherwise
 */

int is_palindrome(char *s)
{
	int end = strlen(s) - 1;

	return (palindrome(s, 0, end));
}

/**
 * palindrome - Recursively check if a given string is palindrome
 * @s: pointer to string
 * @start: integer start index of the string
 * @end: integer end index of the string
 *
 * Return: integer 0 if s is palindrome else
 */

int palindrome(char *s, int start, int end)
{
	if (start > end)
		return (1);
	if (*(s + start) != *(s + end))
		return (0);

	return (palindrome(s, start + 1, end - 1));
}
