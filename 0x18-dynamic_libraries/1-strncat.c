#include "main.h"

/**
 * _strncat - which concatinates two strings based on the third parameter n
 * @n: integer for the number of source characters to be concatinated
 * @dest: destination pointer for character string
 *@src: source pointer for charcater string
 *
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
