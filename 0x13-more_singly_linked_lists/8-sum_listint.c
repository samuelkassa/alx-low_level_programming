#include "lists.h"

/**
 * sum_listint - Summing up all the data (n) of a listint_t
 * linked list
 * @head: A pointer to the head of listint_t struct
 *
 * Return: Sum of all the data (n)
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
