#include "lists.h"

/**
 * print_listint - prints all the elements of alistint_t list
 * @h: pointer to struct
 *
 * Return: The number of all elements of a list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while(h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
