#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Free the memory allocated to an
 * integer linkedlist then set the head to null
 * @head: pointer to head node of the linkedlist
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL && (*head)->next != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	free(*head);
	*head = NULL;
	head = NULL;
}