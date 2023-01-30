#include "lists.h"

/**
 * pop_listint - delets the head node o a listint_t linked list.
 * @head: A pointer of pointer to the head of liistint_t struct
 *
 * Return: head node's data (n)
 */

int pop_listint(listint_t **head)
{
	int value;
	listint_t *tmp;

	if (!(*head) || !head)
		return (0);

	tmp = (*head)->next;
	value = (*head)->n;
	free(*head);
	*head = tmp;

	return (value);
}
