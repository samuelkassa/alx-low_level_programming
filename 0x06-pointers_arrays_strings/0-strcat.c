#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination pointer to string
 * @src: source pointer to string
 *
 * Return: returns concatenated strings
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j]; j++)
	{
		src[i + j] = dest[j];
	}
	src[i + j] = '\0';
	_putchar('\n');

	return (src);
}
