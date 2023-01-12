#include "main.h"

/**
 * _realloc - a function that reallocates a memory block usng malloc
 * and free.
 * @ptr: is a pointer to the memory previously allocated with a call to malloc
 * malloc(old_size).
 * @old_size: is the isze in bytes of the allocated spaces for ptr.
 * @new_size: is the new size, in bytes of the new memory block.
 *
 * Return: If new_size > old_size the added memory should not be initialized.
 * if new_size == old_size do not do anyghin and return ptr
 * if ptr is NULL then the call is equivalent to malloc(new_size), for all
 * values of old_size and new_size.
 *if new_size is ewual to zzero and ptr is not NULL then the callis equivalent
 * to free(ptr). return NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *memo;
	char *ptr_copy, *filler;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		memo = malloc(new_size);

		if (memo == NULL)
			return (NULL);

		return (memo);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_copy = ptr;
	memo = malloc(sizeof(*ptr_copy) * new_size);

	if (memo == NULL)
	{
		free(ptr);
		return (NULL);
	}

	filler = memo;

	for (index = 0; index < old_size && index < new_size; index++)
		filler[index] = *ptr_copy++;

	free(ptr);
	return (memo);
}
