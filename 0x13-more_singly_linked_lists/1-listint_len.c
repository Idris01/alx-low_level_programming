#include <stdio.h>
#include <stddef.h>
#include <ctype.h>
#include "lists.h"

/**
 * listint_len - Find numbers of items in linkedlist
 * of integers
 * @h: pointer to head of the linkedlist
 *
 * Return: unsigned integer number of items
 */

size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;
	const listint_t *temp;

	if (h == NULL)
		return (num_nodes);

	for (temp = h; temp != NULL; temp = temp->next)
		num_nodes++;

	return (num_nodes);
}
