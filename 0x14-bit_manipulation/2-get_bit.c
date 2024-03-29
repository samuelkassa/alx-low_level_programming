#include "main.h"

/**
 * get_bit - finds the binary value of a number at a given index.
 * @n: The given number.
 * @index: The index for checking the value.
 *
 * Return: Value of the bit at index index or -1 if an error occured.
 */


int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
