#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: a pointer to the head of a struct
 * @n: An integer to be added.
 *
 * Return: Address of the new element or NUll if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ending, *traverse;

	traverse = *head;
	ending = malloc(sizeof(listint_t));

	if (ending == NULL)
		return (NULL);
	ending->n = n;
	ending->next = NULL;

	while (traverse->next = NULL)
	{
		traverse = traverse->next;
	}

	traverse->next = ending;

	return (ending);
}
