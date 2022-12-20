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
	int counter;

	i = 0;
	counter = 1;
	if (n <= 0)
		printf("%d\n", a[i]);

	if (n > 0)
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
