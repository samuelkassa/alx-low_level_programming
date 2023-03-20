#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: the string to be checked
 * @accept: character
 *
 * Return: the number of bytes in the initial segment of s whcih consist
 * only of bytes from acccept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				b++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (b);
		}
		s++;
	}
	return (b);
}
