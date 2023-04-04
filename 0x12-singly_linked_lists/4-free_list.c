#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

void _print_string(char *s);

/**
 * free_list - Free all memory allocated to a linked
 * list
 * @head: address of head of the linkedlist
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *memo;

	if (head == NULL)
	{
		_print_string("Freed !");
		exit(0);
	}

	while (head->next != NULL)
	{
		memo = head;
		head = head->next;
		free(memo->str);
		free(memo);
	}
	free(head->str);
	free(head);
}

/**
 * _print_string - write a given string to standard
 * output
 * @s: pointer to string
 *
 * Return: void
 */

void _print_string(char *s)
{
	int counter;

	for (counter = 0; *(counter + s) != '\0'; counter++)
	{
		_putchar(*(counter + s));
	}
	_putchar('\n');
}
