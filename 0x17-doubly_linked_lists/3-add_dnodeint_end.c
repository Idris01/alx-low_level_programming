#include "lists.h"

/**
 * add_dnodeint_end - Adds new node at the end of a
 * singly linked list
 * @head: pointer to address of head
 * @n: integer value of the new node
 *
 * Return: pointer to new node or NULL if error occurs
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *temp = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->n = n;

	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		new->prev = temp;
		temp->next = new;
	}
	return (new);
}
