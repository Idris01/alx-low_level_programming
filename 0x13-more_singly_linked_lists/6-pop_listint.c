#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * pop_listint - Remove the first item in a linked
 * list and return its value
 * @head: pointer tonthe address of the head of list
 *
 * Return: integer value of the removed item
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int val;

	if (*head == NULL)
		return (0);

	temp = *head;
	val = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (val);
}
