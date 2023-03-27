#include "lists.h"

/**
 * sum_dlistint - This functtion sums up the elements of all nodes
 * @head: The pointer to the header of list
 *
 * Return: The sum of all elements
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next
	}
	return (sum);
}
