#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: a string to be searched
 * @c: character to be searched in a string
 *
 * Return: returns the first occurrence of the character c in the string s
 */

char *_strchr(char *s, char c)
{
	int  i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');

}
