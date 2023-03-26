#include "lists.h"

/**
 * print_dlistint - This function prints the number of nodes of a doubly linked list
 * @h: The head of doubly linked list
 *
 * Return: the number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		num_nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num_nodes);
}
