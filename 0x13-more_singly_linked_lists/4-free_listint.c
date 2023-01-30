#include "lists.h"

/**
 * free_listint - Frees a listint_t list
 * @head: Pointer to struct head 
 *
 * Return: Nothing.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while(head)
	{
		temp = head->newt;
		free(head);
		head = temp;
}
