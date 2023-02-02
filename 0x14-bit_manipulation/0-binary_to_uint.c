#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int.
 * @b: characters of 0 and 1
 *
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, multiplier = 1;
	int len;

	if (b == '\0')
		return (0);

	for (len = 0; b[len]; )
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		result += (b[len] - '0') * multiplier;
		multiplier *= 2;
	}

	return (result);
}
