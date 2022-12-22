#include "main.h"

/**
 * string_toupper - converts lower case characters to upper case
 * @a: pointer to string character
 *
 * Return: char
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
	}
	return (a);
}
