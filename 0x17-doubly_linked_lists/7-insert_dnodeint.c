#include "lists.h"

/**
 * insert_dnodeint_at_index - This function inserts a node at specific node
 * @h: The pointer to head of the list
 * @idx: The index to be insert
 * @n: The value to be inserted
 *
 * Return: The address of the node or
 * NULL if fail
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *temp2;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx != 1; idx--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));
	temp2 = malloc(sizeof(dlistint_t));
	if (temp2 == NULL)
		return (NULL);
	temp2->n = n;
	temp2->prev = temp;
	temp2->next = temp->prev;
	temp->next->prev = temp2;
	temp->next = temp2;

	return (temp2);
}
