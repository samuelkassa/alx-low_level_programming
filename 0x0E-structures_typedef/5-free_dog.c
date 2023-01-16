#include "dog.h"
#include <stdlib.h>


/**
 * free_dog - a function that frees.
 * @d: a struct to be free
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
