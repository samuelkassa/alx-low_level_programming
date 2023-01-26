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
	size_t k = 0;

	s = h;
	while (s != NULL)
	{
		printf("[%d] %s\n", strlen(s->str), s->str);
		k += 1;
		s = s->next;
	}
	return (k);
}