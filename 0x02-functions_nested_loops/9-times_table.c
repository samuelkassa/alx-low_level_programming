#include "main.h"

/**
 * times_table - Entry point
 * Description: prints a number in nine by nine table
 *
 * Return: void
 */

void times_table(void)
{
	int row, col, product, tens, ones;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			product = col * row;
			tens = product / 10;
			ones = product % 10;
			if (col == 0)
			{
				_putchar('0');
			}
			else if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ones + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
		}
		_putchar('\n');

	}
}
