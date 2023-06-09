#include "lists.h"

/**
 * free_dlistint - frees a list doubly linked list
 * @head: head of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *start, *next;

	start = head;

	while (start)
	{
		next = start->next;
		free(start);
		start = next;
	}
}

