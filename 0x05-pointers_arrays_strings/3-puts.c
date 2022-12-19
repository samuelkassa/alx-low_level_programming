#include "main.h"

/**
 * _puts - prints string to stdout
 * @str: pointer variable
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
