#include <stdio.h>
#include <stddef.h>
#include <ctype.h>
#include "lists.h"

/**
 * print_listint - Prints all Items in a linked list
 * of integers
 * @h: pointer to head of the linkedlist
 *
 * Return: unsigned integer number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;
	const listint_t *temp;

	if (h == NULL)
		return (num_nodes);

	for (temp = h; temp != NULL; temp = temp->next)
	{
		printf("%d\n", temp->n);
		num_nodes++;
	}
	return (num_nodes);
}
