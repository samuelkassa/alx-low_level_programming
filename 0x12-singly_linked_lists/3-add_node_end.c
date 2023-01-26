#include "lists.h"
#include <string.h>


/**
 * add_node_end - Adds a new node at the end.
 * @head: pointer to the first node.
 * @str: String
 *
 * Return: Address of element, or NULL if it fails.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char dup;
	int count;
	list_t *end_node, *last;

	end_node = malloc(sizeof(list_t));
	if (end_node == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(end_node);
		return (NULL);
	}

	for (count = 0; str[count]; )
		count++;

	end_node->str = dup;
	end_ndoe->len = count;
	end_node->next = NULL;

	if (*head == NULL)
		*head = end_node;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
