#include "main.h"

/**
 * more_numbers - prints a number between 0 and 14 ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int repeat, limit, iter, n;

	iter = 0;
	n = '0';
	limit = 0;

	for (repeat = 0; repeat <= 10; repeat++)
	{
		while (iter < 2)
		{
			while (n <= limit)
			{
				if (limit == '4')
					_putchar('1');
				_putchar(n);
				n++;
			}
			iter++;
			limit = '4';
			n = '0'
		}
		_putchar('\n');
		iter = '0';
		n = '0';
		limit = '9';
	}
}
