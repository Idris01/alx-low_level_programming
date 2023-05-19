#include "lists.h"

/**
 * insert_dnodeint_at_index - insert new node at
 * given index of doubly linked list
 * @h: pointer to address of head node
 * @idx: integer index location to insert new node
 * @n: integer value of the new node
 *
 * Return: address of newly inserted node or Null if
 * failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new;
	size_t cnt = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (temp == NULL)
	{
		free(new);
		return (NULL);
	}
	for (; temp->next != NULL; cnt++, temp = temp->next)
	{
		if (cnt == idx)
		{
			place_at_back(temp, new);
			return (new);
		}
	}
	if (cnt == idx)
	{
		place_at_back(temp, new);
		return (new);
	}
	free(new);
	return (NULL);
}

/**
 * place_at_back - place new node at the back of
 * another node
 * @node: pointer to node to shift forward
 * @new: pointer to new node to take place of old
 * node
 *
 * Return: always void
 */

void place_at_back(dlistint_t *node, dlistint_t *new)
{
	new->prev = node->prev;
	new->next = node;
	node->prev = new;
	node = new->prev;
	node->next = new;
}
