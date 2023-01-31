#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth node of a listint_t
 * linked list.
 * @head: Pointer to the first node of listint_t struct
 * @index: The index of the required node, strating from 0.
 *
 * Return: The nth node.
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *traverse;

	if (!head)
		return (NULL);

	traverse = head;
	for (i = 0; i < index; i++)
	{
		if (traverse == NULL)
			return (NULL);
		traverse = traverse->next;
	}

	return (traverse);
}
