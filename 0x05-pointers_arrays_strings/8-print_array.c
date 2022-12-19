#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of array integer
 * @a: array
 * @n: number of element of array a
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%ld", a[i]);
	}
	printf("\n");
}
