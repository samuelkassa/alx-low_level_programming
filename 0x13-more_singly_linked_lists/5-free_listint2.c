#include "lists.h"

/**
 * free_listint2 - A function that frees a listint_t list and also
 * sets head to be 0.
 * @head: Pointer to head of a listint_t struct.
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;

	if (*head)
	{
		temp = *head;
		*head = NULL;
		free_listint(temp);
		return;
	}
}

/**
 * free_listint - frees all the node in a list.
 * @head: pointer to the list.
 *
 * Return: Nothing 
 */

void free_listint(listint_t *head)
{
	if (!head)
		return;

	free_listint(head->next);
	free(head);
}
