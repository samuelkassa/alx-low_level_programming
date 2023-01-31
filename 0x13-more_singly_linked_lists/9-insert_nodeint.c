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
	listint_t *tmp, *copy = *head;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n = n;

	if (idx == 0)
	{
		tmp->next = copy;
		*head = tmp;
		return (tmp);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);
		copy = copy->next;
	}

	tmp->next = copy->next;
	copy->next = tmp;

	return (tmp);
}

