#include "main.h"

/**
 * flip_bits - calculates the number of bits you need to flip to get one
 * number to another.
 * @n: The first number
 * @m: The second number
 *
 * Return: Number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference = n ^ m, num_bits = 0;

	while (difference > 0)
	{
		num_bits += (difference & 1);
		difference >>= 1;
	}

	return (num_bits);
}
