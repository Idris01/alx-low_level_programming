#include "lists.h"

/**
 * free_dlistint - free a doubly linked list
 * @head: address of head
 *
 * Return: void always
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head->next == NULL)
		free(head);
	else
	{
		for (; head != NULL;)
		{
			temp = head;
			head = head->next;
			free(temp);
		}
	}
}
