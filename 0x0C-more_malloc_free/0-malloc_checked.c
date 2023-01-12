#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc.
 *@b: a parameter in which a memory is goig to be allocated
 *
 * Return: a pointer to the allocated memory.
 * if malloc fails the malloc_checked funcion should cause normal process
 * termination witha a status value of 98.
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *memo;

	memo = mealloc(b);
	if (memo == NULL)
		return (98);
	return(memo);
}
