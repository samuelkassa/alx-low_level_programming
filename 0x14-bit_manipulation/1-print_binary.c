#include "main.h"

/**
 * print_binary - Change and print a given decimal number to binary.
 * @n: a given decimal number.
 *
 * Return: Nothing.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
