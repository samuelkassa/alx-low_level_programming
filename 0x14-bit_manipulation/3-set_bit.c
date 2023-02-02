#include "main.h"

/**
 * set_bit - A function that sets the value ofa bit to 1 at a given index.
 * @n: pointer to a number.
 * @index: The index for setting
 *
 * Return: 1 if it worked
 * -1 if error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);

}
