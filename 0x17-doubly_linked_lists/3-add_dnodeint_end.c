#include "lists.h"

/**
 * add_dnodeint_end - adds an end node on a doubly linked list
 * @head: pointer to head of the node
 * @n: The element of the given node
 *
 * Return: a pointer the new doubly linked list or
 * NULL if it fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last_node, *temp = NULL;

	last_node = malloc(sizeof(dlistint_t));
	if (last_node == NULL)
		return (NULL);
	last_node->n = n;
	last_node->next = NULL;
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = last_node;
	last_node->prev = temp;
	return (*head);
}
