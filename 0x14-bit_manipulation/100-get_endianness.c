#include "main.h"

/**
 * get_endianness - checks for the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	int input = 1;
	char *endian = (char *)&input;

	if (*endian == 1)
		return (1);

	return (0);
}
