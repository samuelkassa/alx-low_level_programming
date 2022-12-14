#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entery point
 * @n: integer
 *
 * Description: It prints the first 98 numbers ascending or
 * descending order but if it reaches 98 it has to halt
 *
 *Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");


}
