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
	dlistint_t *biggner;

	biggner = malloc(sizeof(dlistint_t));
	if (biggner  == NULL)
		return (NULL);
	biggner->n = n;
	biggner->prev = NULL;
	biggner->next = *head;
	if (*head != NULL)
		(*head)->prev = biggner;
	*head = biggner;
	return (biggner);
}
