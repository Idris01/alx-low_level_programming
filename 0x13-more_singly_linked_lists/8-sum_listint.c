#include <stddef.h>
#include "lists.h"

/**
 * sum_listint - Finds the sum of items in linked list
 * @head: pointer to head of list
 *
 * Return: integer sum of items in list
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;

	if (head == NULL)
		return (0);

	for (sum = 0, temp = head; temp != NULL; temp = temp->next)
	{
		sum += temp->n;
	}
	return (sum);
}
