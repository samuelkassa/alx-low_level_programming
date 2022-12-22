#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the elements of integer array
 * @a: array
 * @n: number of element of array a
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int left, right, middle;

	n -= 1;
	for (i = 0; i < middle; i++)
	{
		left = a[n - i];
		right = a[i];
		a[n - i] = right;
		a[i] = left;
	}
}
