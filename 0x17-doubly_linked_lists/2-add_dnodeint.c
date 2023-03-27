#include "lists.h"

/**
 * add_dnodeint - This funcion add at the beginning of the node
 * @head: A pointer  to the first node
 * @n: The element of the given node
 *
 * Return: The address of the newly created linked list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *first_node;

	first_node = malloc(sizeof(dlistint_t));
	if (first_node  == NULL)
		return (NULL);
	first_node->n = n;
	first_node->prev = NULL;
	first_node->next = *head;
	if (*head != NULL)
		(*head)->prev = first_node;
	*head = first_node;
	return (first_node);
}
