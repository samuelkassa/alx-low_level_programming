#include "lists.h"

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
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return NULL;

	new_node->str = str;
	new_node->next = NULL;

	list_t *curr_node = * head;
	while (curr_node != NULL)
	{
		curr_node = curr_node->next;
	}

	curr_node->next = new_node;
}
