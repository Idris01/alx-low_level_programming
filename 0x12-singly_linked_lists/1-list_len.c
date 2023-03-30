#include <stddef.h>
#include "lists.h"

/**
 * list_len - Find thr number of elements in a
 * singly linked list
 * @h: pointer to head of linked list
 *
 * Return: integer no of elements
 */

size_t list_len(const list_t *h)
{
	size_t elements;

	if (h == NULL)
		return (0);

	elements = 0;
	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
