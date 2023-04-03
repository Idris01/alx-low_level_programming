#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new element to the end of
 * a linkedlist of integer
 * @head: pointer to the address of head of linkedlist
 * @n: integer value of the last added element
 *
 * Return: pointer to the newly added element or NULL
 * if an error occurs
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL) /* adding first element */
	{
		*head = new;
	}
	else
	{
		for (temp = *head; temp->next != NULL; temp = temp->next)
			;
		/* temp now points to the last item */
		temp->next = new;
	}
	return (new);
}
