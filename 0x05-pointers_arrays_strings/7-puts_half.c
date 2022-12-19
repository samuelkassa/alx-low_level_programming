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
	--i;
	if (i % 2 == 0)
	{
		j = i / 2;
	}
	else
	{
		j = (i - 1) / 2;
	}

	while (j <= i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
