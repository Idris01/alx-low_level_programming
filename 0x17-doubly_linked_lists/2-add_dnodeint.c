#include "lists.h"

/**
 * add_dnodeint - add new node at the beginning of a
 * doubly linked list
 * @head: pointer to address of head
 * @n: integer value of the new node
 *
 * Return: pointer to added node or NULL if error
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;

	if (*head == NULL)
		*head = new;
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}
	return (new);
}
