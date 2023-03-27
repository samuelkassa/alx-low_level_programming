#include "lists.h"

/**
 * get_dnodeint_at_index - This function returns a node at a given index
 * @head: a pointer to the head of list
 * @index: The index to be searched
 *
 * Return: The required node or
 * NUll if fails
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
