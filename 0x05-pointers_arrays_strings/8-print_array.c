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
	int i, j;
	int counter;

	i = 0;
	j = 0;
	counter = 1;
	if (n <= 0)
	{
		while (a[j] != '\0')
		{
			printf("%d\n", a[j])
			j++;
		}
	}

	if (n >= 1)
	{
		while (a[i] != '\0' && counter < n)
		{
			printf("%d, ", a[i]);
			i++;
			counter++;
		}
		printf("%d\n", a[i]);
	}
}
