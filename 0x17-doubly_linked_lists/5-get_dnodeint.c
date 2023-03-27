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
	dlistint_t *temp;
	unsigned int tot_node = 0;

	if (head == NULL)
		return (NULL);
	while (head)
	{
		tot_node++;
	}
	tot_node++;
	temp = head;
	while (index < tot_node)
	{
		temp = temp->next;
		continue;
	}
	temp = temp->next;
	return (temp);

}
