#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int is_num(char *s, int size);

/**
 * main - Entrypoint to program
 * Prints sum of integer commandline arguments
 * @argc: integer number of commandline args
 * @argv: array of commandline arguments
 *
 * Return: integer Always 0
 */

int main(int argc, char **argv)
{
	int size;
	int sum, success = 1;
	int len;

	if (argc < 2)
		printf("0\n");
	else
	{
		size = 1;
		sum = 0;
		while (size < argc)
		{
			len = strlen(*(argv + size));
			if (is_num(*(argv + size), len))
				sum += atoi(*(argv + size));
			else
			{
				printf("Error\n");
				success = 0;
				break;
			}
			size++;
		}
		if (success)
			printf("%d\n", sum);
	}
	return (0);
}

/**
 * is_num - Recursively Check if a given string is
 * an integer literal
 * @s: pointer to string
 * @size: length of the string s
 *
 * Return: integer 1 if true 0 otherwise
 */

int is_num(char *s, int size)
{
	int is = isdigit(*s) ? 1 : 0;

	if (size == 1)
		return (is);
	return (is && is_num((s + 1), size - 1));
}
