#include "main.h"

/**
 * free_lst - A function that frees a list_t list
 * @head: The pointer to first node.
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *fr;

	while (head)
	{
		fre = head-next;
		free(head->str);
		free(head);
		head = fr;
	}
}
