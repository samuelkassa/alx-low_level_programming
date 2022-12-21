#include "main.h"

/**
 * _strncpy - Copies a string:
 * @dest: destination pointer to cahr
 * @src: source pointer to char
 * @n: integer value which determines the copy level
 *
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for (; j < n; j++)
	{
		dest[j] = '\0';
	}

	return (dest);
}

