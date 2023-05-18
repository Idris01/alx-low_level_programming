
#include "lists.h"

/**
 * dlistint_len - Finds the number of elements in a
 * doubly linked list
 * @h: pointer to head of list
 *
 * Return: integer number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *temp = h;

	for (; temp != NULL; len++)
	{
		temp = temp->next;
	}
	return (len);
}
