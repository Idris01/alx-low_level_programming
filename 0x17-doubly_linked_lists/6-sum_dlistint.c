#include "lists.h"

/**
 * sum_dlistint - Find the sum of all items in a
 * doubly linked list
 * @head: pointer to head node
 *
 * Return: integer sum of all items
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	for (; head != NULL;)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
