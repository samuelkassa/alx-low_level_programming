#include "main.h"

/**
 * _memset -  function fills the first n bytes of the memory area pointed to b
 * y s with the constant byte b.
 * @s: pointer area in which value are going to be printed
 * @b: constant which is going to printed
 * @n: byte size
 *
 * Return: pointer to the memory size area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned char *changed = s, value = c;

	for (i = 0; i < n; i++)
	{
		changed[i] = value;
	}
	return (changed);
}
