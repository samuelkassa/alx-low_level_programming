#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: a string to be depilcated
 *
 * Return: If str is NULL - NULL
 * If no enough memory - NULL
 * else pointer to dupilcated string.
 */

char *_strdup(char *str)
{
	char *str_copy;
	int i = 0;
	int j = 0;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}
	str_copy = malloc(sizeof(*str_copy) * i);

	if (str_copy == NULL)
		return (NULL);
	while (j < i)
	{
		str_copy[j] = str[j];
	}
	return (str_copy);
