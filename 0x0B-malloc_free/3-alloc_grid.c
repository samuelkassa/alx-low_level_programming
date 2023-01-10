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
	int i, j, k, l;
	int **twarray;

	if (width < 1 || height < 1)
		return (NULL);

	twarray = malloc(sizeof(int *) * height);

	if ( twarray == NULL)
	{
		free(twarray);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		twarray[i] = malloc(sizeof(int)  * width);
	
		if (twarray[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(twarray[j]);
			}

			free(twarray);
			return (NULL);
		}
	}

	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			twarray[k][i] = 0;
		}
	}
	
	return (twarray);
}
