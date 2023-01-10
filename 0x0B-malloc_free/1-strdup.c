#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: String 1
 * @s2: String 2
 *
 * Return: IF null is passed treat it as empty string
 * If there is failure - NULL
 * else return pointer to newly allocated space.
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned long int i, j;
	unsigned long int size;

	size = sizeof(s1) + sizeof(s2);
	str = malloc(sizeof(*str) * size);
	if (str != NULL && size != 0)
	{
		for (i = 0; i < sizeof(s1); i++)
		{
			*(str + i) = *(s1 + i);
		}
		for (j = 0; j < sizeof(s2); j++)
		{
			*(str + i + j) = *(s2 + j);
		}
		return (str);
	}
	if (str == NULL)
		return (NULL);

	return ('\0');

}
