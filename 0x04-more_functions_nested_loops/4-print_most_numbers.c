#include "main.h"

/**
 * print_most_numbers - prints numbers except 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	char c = '0';

	while (c != '2' && c != '4')
	{
		_putchar(c);
	}
	_putchar('\n');
}
