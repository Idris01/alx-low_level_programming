#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Free all memory allocated to a linked
 * list
 * @head: address of head of the linkedlist
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *memo;

	if (head == NULL)
	{
		free(head);
		exit(0);
	}
	while (head->next != NULL)
	{
		memo = head;
		head = head->next;
		free(memo->str);
		free(memo);
	}
	free(head->str);
	free(head);
}
