#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * main - Entrypoint to program that does simple
 * calculation
 * @argc: integer, number of arguments
 * @argv: pointer to array of arguments
 *
 * Return: always
 */

int main(int argc, char **argv)
{
	int num1, num2, result;
	char operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strlen(*(argv + 2)) != 1)
	{
		printf("Error\n");
		exit(99);
	}
	operator = **(argv + 2);
	switch (operator)
	{
		case '+':
		case '-':
		case '/':
		case '%':
		case '*':
			break;
		default:
			printf("Error\n");
			exit(99);
	}
	num1 = atoi(*(argv + 1));
	num2 = atoi(*(argv + 3));

	if (num2 == 0 && (operator == '/' || operator == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(&operator)(num1, num2);
	printf("%d\n", result);
	exit(0);
}
