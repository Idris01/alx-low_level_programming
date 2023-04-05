#include <stddef.h>
#include "lists.h"

/**
 * reverse_listint - Reverse a given linked list
 * @head: pointer to address of head of list
 *
 * Return: pointer to the first item in reversed
 * list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (*head == NULL)
		return (NULL);

	prev = NULL;
	next = *head;

	while (next->next != NULL)
	{
		*head = next->next;
		next->next = prev;
		prev = next;
		next = *head;
	}
	next->next = prev;
	return (next);
}
