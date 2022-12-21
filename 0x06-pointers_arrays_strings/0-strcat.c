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

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < i && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (src);
}
