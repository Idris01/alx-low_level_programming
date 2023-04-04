#include <stdlib.h>
#include "lists.h"

void print_string(char *s);

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

	if (*head == NULL)
	{
		print_string("Freed !\n");
		exit(0);
	}
	while (*head != NULL && (*head)->next != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	free(*head);
	*head = NULL;
}

/**
 * print_string - Print given string to stdout
 * @s: pointer to string
 *
 * Return: void
 */

void print_string(char *s)
{
	int index;

	for (index = 0; (s != NULL && *(s + index) != '\0'); index++)
		_putchar(*(s + index));
}
