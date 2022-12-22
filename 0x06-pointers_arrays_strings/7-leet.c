#include "main.h"

/**
 * leet - encoding a string into 1337
 * @str: string to be encoded
 *
 * Return: char
 */

char *leet(char *str)
{
	str_index = 0;

	while (str[str_index] != '\0')
	{
		if (str[str_index] == 'a' || str[str_index] == 'A')
			str[str_index] = '4';
		if (str[str_index] == 'e' || str[str_index] == 'E')
			str[str_index] = '3';
		if (str[str_index] == 'o' || str[str_index] == 'O')
			str[str_index] = '0';
		if (str[str_index] == 't' || str[str_index] == 'T')
			str[str_index] = '7';
		if (str[str_index] == 'l' || str[str_index] == 'L')
			str[str_index] = '1';
		str_index++;
	}
	return (src);
}
