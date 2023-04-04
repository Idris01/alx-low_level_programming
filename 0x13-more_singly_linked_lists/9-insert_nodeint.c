#include <stddef.h>
#include <stdlib.h>
#include <ctype.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Insert a new node at
 * given index of a linkedlist
 * @head: pointer to address of head of list
 * @idx: integer position to insert the node
 * @n: integer value of new element
 *
 * Return: pointer to new node or NULL if an error
 * occur
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	size_t cnt;

	if (*head == NULL)
		return (NULL);

	for (cnt = 0, temp = *head; (cnt <= idx) && (temp != NULL); cnt++)
	{
		if (cnt == idx)
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
				return (NULL);

			new->n = n;
			new->next = temp;
			temp = new;

			return (new);
		}
	}
	return (NULL);
}
