#include "main.h"

/**
 * puts_half - prints the last half of the string
 * @str: pointer to char type
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	i--;
	j = i / 2;
	while (j <= i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}