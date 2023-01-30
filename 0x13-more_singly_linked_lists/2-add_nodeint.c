#include "lists.h"

/**
 * add_nodeint - addes a new nod at the beginning of a listint_t list.
 * @head: pointer to structure head
 * @n: an integer to be added.
 *
 * Return: Address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = *head;

	*head = ptr;

	return (ptr);
}
