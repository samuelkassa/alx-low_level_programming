#include "lists.h"
#include <string.h>

/**
 * add_node - A function that adds a new node at the beginning of a list_t
 * list.
 * @head: Firts element;
 * @str: String
 *
 * Return: Address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int count;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	dup = strdup(str);

	if (dup == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (count = 0; str[count]; )
		count++;
	new_node->str = dup;
	new_node->len = count;
	new_node->next = *head;

	*head = new_node;

	return (new_node);

}
