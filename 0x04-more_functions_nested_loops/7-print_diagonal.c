#include "main.h"

/**
 * print_diagonal - prints forward slash diagonally
 * @n: integer
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, spacer;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			spacer = 1;
			while (spacer < i)
			{
				_putchar(' ');
				spacer++;
			}
			_putchar(92);
			_putchar('\n');
		}
	}

	else
	{
		_putchar('\n');
	}
}
