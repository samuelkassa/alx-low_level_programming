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
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
