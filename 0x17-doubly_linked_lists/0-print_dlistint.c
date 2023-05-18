#include "lists.h"

/**
 * print_dlistint - Prints all items in a doubly
 * linked list
 * @h: pointer to head of list
 *
 * Return: integer
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *temp = h;

	for (; temp != NULL; len++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (len);
}
