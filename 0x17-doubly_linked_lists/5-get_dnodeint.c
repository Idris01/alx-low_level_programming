#include "lists.h"

/**
 * get_dnodeint_at_index - Get node at given index of
 * a doubly linked list
 * @head: address of head node
 * @index: integer index to find node of
 *
 * Return: address of node at index if found else NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	size_t counter = 0;

	for (; temp != NULL; counter++)
	{
		if (counter == index)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}
