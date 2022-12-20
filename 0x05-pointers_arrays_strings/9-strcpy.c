#include "main.h"

/**
 * _strcpy - copying the string pointed to by src
 * @src: source pointer
 * @dest: destination pointer
 *
 * Return: char with copy of string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + i);
	}
	dest[i] = '\0';

	return (dest);
}
