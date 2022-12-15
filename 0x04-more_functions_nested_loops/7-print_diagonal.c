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

	spacer = 1;
	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(92);
			_putchar('\n');
			while (spacer < i)
			{
				_putchar(32);
				spacer++;
			}
		}
	}

	else
	{
		_putchar('\n');
	}
}
