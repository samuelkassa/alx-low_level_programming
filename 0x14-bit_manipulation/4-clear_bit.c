#include "main.h"

/**
 * clear_bit - Sets a given bit value to 0.
 * @n: A pointer to required number.
 * @index: The required index to set.
 *
 * Return: 1 if it worked -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
