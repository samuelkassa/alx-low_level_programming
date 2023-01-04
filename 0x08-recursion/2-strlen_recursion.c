#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: a string under investigation.
 *
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	int strleng = 0;
	if (*s)
	{
		strleng++;
		strleng += _strlen_recursion(s + 1);
	}
	return (strleng);
}
