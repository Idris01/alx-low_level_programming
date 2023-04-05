#include <stdlib.h>
#include <stddef.h>
#include <ctype.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Delete node at index
 * of a given linkedlist
 * @head: pointer to address of head of list
 * @index: positive integer index of item to
 * delete
 *
 * Return: 1 if deleted or -1 if delete fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del, *temp;
	size_t cnt;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		del = *head;
		*head = (*head)->next;
		free(del);
		return (1);
	}

	for (temp = *head, cnt = 0; temp != NULL; cnt++)
	{
		if ((cnt + 1) == index)
		{
			del = temp->next;
			temp->next = del->next;
			free(del);
			return (1);
		}
		temp = temp->next;
	}
	return (-1);
}
