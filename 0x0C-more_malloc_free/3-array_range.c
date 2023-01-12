#include "main.h"

/**
 * array_range - a function that creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 *
 * Return: if min > max or malloc fails - NULL
 * else the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *int_array;
	int index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	int_array = malloc(sizeof(*int_array) * size);

	if (int_array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		int_array[index] = min++;

	return (int_array);
}
