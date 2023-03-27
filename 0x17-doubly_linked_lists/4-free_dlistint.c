#include "lists.h"

/**
 * free_dlistint - frees a given linked list
 * @head: The head to list
 *
 * Return: None
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t * temp;

	while(head->next)
	{
		printf("%d", head->n);
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
}
