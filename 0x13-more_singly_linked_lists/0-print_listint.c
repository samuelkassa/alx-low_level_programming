#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to struct head
 *
 * Return: The number of all elements of a list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while(h)
	{
		count++;
		printf("%d", h->n);
		h = h->next;
	}

	return (count);
}
