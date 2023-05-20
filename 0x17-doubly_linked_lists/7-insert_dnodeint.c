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
	initialize(new, n);
	if (temp == NULL && idx == 0)
	{
		*h = new;
		return (new);
	}
	if (temp == NULL)
		return (NULL);
	for (; temp->next != NULL; cnt++, temp = temp->next)
	{
		if (cnt == idx)
		{
			if (idx == 0)
			{
				new->next = temp;
				*h = new;
			}
			else
				place_at_back(temp, new);
			return (new);
		}
	}
	switch (cnt - idx)
	{
		case (0):
			return (place_at_back(temp, new));
		case (-1):
			new->prev = temp;
			temp->next = new;
			return (new);
		default:
			free(new);
			return (NULL);
	}
}

/**
 * place_at_back - place new node at the back of
 * another node
 * @node: pointer to node to shift forward
 * @new: pointer to new node to take place of old
 * node
 *
 * Return: pointer to new node
 */

dlistint_t *place_at_back(dlistint_t *node, dlistint_t *new)
{
	new->prev = node->prev;
	new->next = node;
	node->prev = new;
	node = new->prev;
	node->next = new;

	return (new);
}

/**
 * initialize - initalize node pointer with value n
 * @new: pointer to new node of doubly linked list
 * @n: value of the new node
 *
 * Return: always void
 */
void initialize(dlistint_t *new, int n)
{
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
}
