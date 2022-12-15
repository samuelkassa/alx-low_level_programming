#include "main.h"

/**
 * print_numbers - prints a number between 0 and 9
 *
 * Return: void
 */

void print_numbers(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
