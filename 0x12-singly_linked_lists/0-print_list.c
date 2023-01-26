#include "lists.h"

/**
 * print_list - prints all elements of a list_t list.
 * @h: string.
 *
 * Return: The number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t num_node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		num_node++;
		h = h->next;
	}
	return (num_node);
}
