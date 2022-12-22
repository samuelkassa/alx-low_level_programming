#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 *
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int i, j, remainder;

	for (i = 0, j = 0; s1[i] != '\0' && s2[j] != '\0'; i++, j++)
	{
		if (_putchar(s1[i]) == _putchar(s2[j]))
		{
			remainder = _putchar(s1[i]) - _putchar(s2[j]);
		}
		else if (_putchar(s1[i]) > _putchar(s2[j]))
		{
			remainder = _putchar(s1[i]) - _putchar(s2[j]);
		}
		else
		{
			remainder = -(_putchar(s1[i]) - _putchar(s2[j]));
		}
		return (remainder);
	}
}
