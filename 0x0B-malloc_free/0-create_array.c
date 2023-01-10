#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a
 * specific char.
 * @size: Size of array
 * @c: The character to be printed
 *
 * Return: Null if size - 0
 * Pointer to the array
 * Or Null if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(*arr) * 99);
	if (size != 0 && arr != NULL)
	{
		for (i = 0; i < size; i++)
		{
			*(arr + i) = c;
		}
		return (arr);
	}
	if (arr == NULL)
		return (NULL);

	return (NULL);
}
