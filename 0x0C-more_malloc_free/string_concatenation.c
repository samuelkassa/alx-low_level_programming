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
	unsigned int i, j, index = 0, length = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	for (i = 0; s1[i]; i++)
	{
		length++;
	}
	j = 0;
	while (s2)
	{
		j++;
	}

	concat = malloc(sizeof(*concat) * (length + 1));

	if (concat == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		concat[index] = s1[index];


	for (i = 0; s2[i] && i < n; )
		concat[index++] = s2[i++];

	concat[length] = '\0';
	return (concat);
}
