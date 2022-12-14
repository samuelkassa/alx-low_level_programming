#include "main.h"

/**
 * main - entry point
 *
 * Description: prints alphabet
 *
 * Return: Always 0 (successfull)
 */
void main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
