#include <ctype.h>
#include <stddef.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Get node at given index of a
 * linkedlist
 * @head: pointer to head of linkedlist
 * @index: unsigned integer index to find node of
 *
 * Return: address of node if found other wise NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	size_t counter;

	if (head == NULL)
		return (NULL);

	for (temp = head, counter = 0; temp != NULL; counter++)
	{
		if (counter == index) /* item found */
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}
