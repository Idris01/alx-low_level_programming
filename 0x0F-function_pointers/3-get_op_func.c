#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - Get the function corresponding to
 * a given operator
 * @s: pointer to character
 *
 * Return: pointer to function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (*(ops[i].op) != *s && (ops[i].op) != NULL)
	{
		i++;
	}
	if (ops[i].op == NULL)
	{
		return (NULL);
	}
	return (ops[i].f);
}
