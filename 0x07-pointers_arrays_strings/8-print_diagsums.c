#include "mian.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matirx
 * @a: array
 * @size: the size of a square matrix.
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int row = 0, col = 0;

	while (row < size)
	{
		sum1 += *(a + row * size + col);
		sum2 += *(a + row * size + (size - 1 - col));
		col++;
		row++
	}

	printf("%d, %d\n", sum1, sum2);

}
