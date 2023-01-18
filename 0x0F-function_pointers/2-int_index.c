#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer
 * @array : the array to be searched
 * @size : the size of the array
 * @cmp : pointer to the function to be used to compare values
 *
 * Return: Nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
