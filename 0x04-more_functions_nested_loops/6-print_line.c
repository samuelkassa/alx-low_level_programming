#include "main.h"

/**
 * print_line - prnts line
 * @n: integer
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}

}
