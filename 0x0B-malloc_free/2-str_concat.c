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
	int i, j, k, length;

	i = j = k = length = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}

	length = i + j;
	str = malloc((sizeof(*str) * length) + 1);

	if (str == NULL)
		return (NULL);

	j = 0;
	while (k < length)
	{
		if (k < i)
		{
			str[k] = s1[k];
		}
		if (k >= i)
		{
			str[k] = s2[j];
			j++;
		}
		k++;
	}
	str[k] = '\0';
	return (str);
}
