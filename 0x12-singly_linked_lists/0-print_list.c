#include "lists.h"


/**
 * print_list - prints all elements of a list_t list.
 * @h: string.
 *
 * Return: The number of nodes.
 */

size_t print_list(const list_t *h)
{
	list_t *s;
	size_t num_node = 0;

	s = h;
	while (s != NULL)
	{
		if (s->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", s->len, s->str);
		num_node++;
		s = s->next;
	}
	return (num_node);
}
