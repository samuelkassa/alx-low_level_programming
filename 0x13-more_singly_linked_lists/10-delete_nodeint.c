#include "lists.h"

/**
 * delete_nodeint_at_index - Delete the node at index index of a listint_t
 * linked list.
 * @head: A pointer of pointer to the struct head
 * @index: Required index position for deleting the node
 *
 * Return: 1 if succeeded -1 otherwise.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *traverse = *head;
	unsigned int i;

	if (!traverse)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(traverse);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (traverse->next == NULL)
			return (-1);
		traverse = traverse->next;
	}
	tmp = traverse->next;
	traverse->next = tmp->next;
	free(tmp);
	return (1);
}
