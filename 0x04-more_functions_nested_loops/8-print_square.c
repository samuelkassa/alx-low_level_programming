#include "main.h"

/**
 * print_square - printing a square based on the value of size
 * @size: size of square
 *
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{

		for (i = 0; i < size; i++)
		{
			j = 0;
			while (j < size)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
