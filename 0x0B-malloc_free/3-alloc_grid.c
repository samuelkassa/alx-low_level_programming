#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensionial array of integers.
 * @width: width of the array
 * @height: height of the array
 *
 * Return: If malloc fails - NULL
 * If height or wight is less than 1 - NULL
 * Else retun a pointer to a 2 dimensional array.
 */

int **alloc_grid(int width, int height)
{
	int **address;
	int *two_di_array;
	int h, w;
	int dimension = 0;

	address = &two_di_array;

	if (width < 1 || height < 1)
		return (NULL);

	two_di_array = malloc((sizeof(*two_di_array) * (width + height)) + 1);

	if (two_di_array == NULL)
		return (NULL);

	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			two_di_array[dimension] = 0;
			w++;
			dimension++;
		}
		h++;
	}
	two_di_array[dimension] = '\0';
	return (address);
}
