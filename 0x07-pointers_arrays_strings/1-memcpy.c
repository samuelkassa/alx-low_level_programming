#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest.
 * @dest: destination memory area
 * @src: source memory area
 * @n: bytes amount to be compied
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char destination = dest, source = src;

	for (i = 0; i < n; i++)
	{
		destination[i] = source[i];
	}
	return (destination);
}
