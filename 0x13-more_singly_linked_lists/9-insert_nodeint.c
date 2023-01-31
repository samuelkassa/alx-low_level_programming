#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given poistion.
 * @head: Pointer of pointer to struct head
 * @idx: The insertion index
 * @n: the value to be added.
 *
 * Return: the address of the new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tmp;

	if (!(*head) || !head)
		return (NULL);

	tmp = *head;
	for (i = 0; i < idx; i++)
	{
		if (!tmp)
			return (NULL);
		tmp = tmp->next;
	}

	tmp->n = n;
	return (tmp);
}

