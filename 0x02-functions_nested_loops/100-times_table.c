#include "main.h"

/**
 * print_times_table - Entery point
 *@n: integer
 * Description: It print n times table starting from 0
 *
 * Return: void
 */

void print_times_table(int n)
{
	int col, row, product;

	if (n <= 15 && n >= 0)
	{
		for (row = 0; row <= 15; row++)
		{
			for (col = 0; col <= 15; col++)
			{
				product = row * col;
				if (col == 0)
					_putchar('0');
				else if (product < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(product % 10 + '0');
				}
				else if (product < 100 && product >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((product / 10) % 10 + '0');
					_putchar(prdouct % 10 + '0');
				}
				else if (product < 1000 && product >= 100)
				{
					_putcahr(',');
					_putchar(' ');
					_putchar(product / 100 + '0');
					_putchar((product / 10) % 10 + '0');
					_putchar(product % 10 + '0');
				}

			}
			_putchar('\n');
		}
	}
}
