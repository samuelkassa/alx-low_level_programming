#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to be changed to upper case
 *
 * Return: char
 */

char *cap_string(char *str)
{
	int str_index;

	str_index = 0;
	while (str[str_index])
	{
		while (!(str[str_index] >= 'a' && str[str_index] <= 'z'))
		{
			str_index++;
		}
		if (str[str_index - 1] == ' ' || str[str_index - 1] == '\t' ||
		str[str_index - 1] == '\n' || str[str_index - 1] == ',' ||
		str[str_index - 1] == ';' || str[str_index - 1] == '.' ||
		str[str_index - 1] == '!' || str[str_index - 1] == '?' ||
		str[str_index - 1] == '"' || str[str_index - 1] == '(' ||
		str[str_index - 1] == ')' || str[str_index - 1] == '{' ||
		str[str_index - 1] == '}' || str_index == 0)
			str[str_index] -= 32;

		str_index++;
	}
	return (str);
}
