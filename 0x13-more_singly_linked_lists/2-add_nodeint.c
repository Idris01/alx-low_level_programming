#include <stddef.h>
#include <stdlib.h>
#include <ctype.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node to at the beginning
 * of a linkedlist
 * @head: pointer to address of head of linkedlist
 * @n: integer value of the newly added node
 *
 * Return: pointer to the new node or NULL of error
 * in case of an error
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		new->next = NULL;
	}
	else
	{
		new->next = *head;
	}
	*head = new;

	return (new);
}

