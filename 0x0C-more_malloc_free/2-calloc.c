#include "main.h"

/**
 * _calloc - funcion that allocates memory for an array.
 * @nmemb: elemnts of the array.
 * @size: the size of each array elemnts.
 *
 * Return: If nmemb or size is 0 then it returns NULL
 * malloc fails return NULL
 * else return pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memo_size;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memo_size = malloc(size * nmemb);

	if (memo_size == NULL)
		return (NULL);

	filler = memo_size;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';

	return (memo_size);
}
