#include "main.h"

/**
 * main - entry point
 *
 * Description: prints alphabet
 *
 * Return: Always 0 (successfull)
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
