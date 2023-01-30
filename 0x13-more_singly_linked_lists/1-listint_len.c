#include "lists.h"

/**
 * listint_len - return the number of elements in a structure
 * @h: pointer to strucct head
 *
 * Return: the number of elements.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while(h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
