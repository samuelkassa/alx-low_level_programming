#include "main.h"
#include <stdlib.h>

/**
 * strtow - a function that splits a string into words.
 * @str: string to be slitted
 *
 * Return: NULL if str == NULL or str == "".
 * NULL if a function fails.
 * a pointer to an array of strings(words).
 */

char **strtow(char *str)
{
	char **strw;
	int i, j, length = 0;

	if (str == NULL || str == "")
	{
		return (NULL);
	}
	while (str[length])
	{
		length++;
	}
	strw = malloc(sizeof(char *) * length + 1);

	if (strw == NULL)
		return (NULL);

	length = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; str[j] != " "; j++)
		{
			strw[i][j] = str[length++];
		}
		str[i][j] = '\0';
	}
	strw[length] = '\0';
	return (strw);
}
