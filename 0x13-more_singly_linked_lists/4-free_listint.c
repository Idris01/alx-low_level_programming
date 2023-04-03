#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Free the memory allocated to an
 * integer linkedlist
 * @head: pointer to head node of the linkedlist
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL && head->next != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
