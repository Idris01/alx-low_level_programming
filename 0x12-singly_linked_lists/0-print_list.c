#include <stdio.h>
#include <ctype.h>
#include "lists.h"

/**
 * print_list - Print all items in a given list h
 * @h: pointer to head of list
 *
 * Return: integer number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int counter;

	if (h == NULL)
		return (0);

	counter = 0;
	while (h != NULL)
	{

		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		counter++;
	}
	return (counter);
}
