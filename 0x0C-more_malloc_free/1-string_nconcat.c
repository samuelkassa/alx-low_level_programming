#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: a pointer to string 1.
 * @s2: a pointer to string 2.
 * @n: the number of bytes for string 2 to be concatenated.
 *
 * Return: If malloc fails return NULL
 * if NULL is passed treat it as an empty string.
 * eles return a pointer to newly allocated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, j, index = 0, length = 0;

	if (s1 = NULL)
		return ("");
	if (s2 == NULL)
		return ("");
	i = 0;
	while (s1)
	{
		i++;
	}
	j = 0;
	while (s2)
	{
		j++;
	}

	if (j <= n)
		length = j + i + 1;
		concat = malloc(sizeof *concat * (j + i + 1));
	if (j > n)
		length = j + i + 1;
		concat = malloc(sizeof *concat * (n + i + 1));
	
	if (concat == NULL)
		return (NULL);
	if (j <= n)
	{
		while (index < i)
			concat[index] =s1[index];
			index++;

		if (index >= i)
		{
			j = 0;
			while (j <= n)
			{
				concat[index] = s2[j];
				index++;
				j++;
			}
		}
	}
	if (j > n)
	{
		while (index < i)
		{
			concat[index] = s1[index];
			index++;
		}
		if (index >= i)
		{
			  j =0;
			while (n >= j)
			{

				concat[index] = s2[j];
				index++;
				j++;
			}
		}
	}

	concat[length] = '\0';
	return (concat);
}

