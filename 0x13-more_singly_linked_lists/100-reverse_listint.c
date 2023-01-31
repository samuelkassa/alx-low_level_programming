#include "lists.h"

/**
 * reverse_listint - A function that reverses a listint_t linked list.
 * @head: A pointer of pointer to head of a struct.
 *
 * Return: Pointer to first element in a Reversed struct
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *right, *left;

	if ((*head == NULL) || (head == NULL))
		return (NULL);

	while ((*head)->next)
	{
		right = (*head)->next;
		(*head)->next = left;
		left = *head;
		*head = right;
	}

	(*head)->next = left;

	return (*head);
}
